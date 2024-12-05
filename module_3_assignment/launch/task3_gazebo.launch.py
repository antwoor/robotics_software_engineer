from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python import get_package_share_directory
import os
from launch.substitutions import Command 
from launch.actions import ExecuteProcess

def generate_launch_description():
    pkg_path = get_package_share_directory('module_3_assignment')
    #urdf_file = os.path.join(pkg_path, 'urdf', 'static_robot.urdf')
    xacro_file = os.path.join(pkg_path, 'urdf', 'combo_bot.xacro')
    controller_config_file = os.path.join(pkg_path, 'config', 'akkerman_controller.yaml')
    return LaunchDescription([
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher',
        ),
        Node(package='robot_state_publisher',
             executable='robot_state_publisher',
             name= 'robot_state_publisher',
             output='screen',
             parameters=[{'robot_description': Command(['xacro ', xacro_file])}]
             ),
        Node(
            package='controller_manager',
            executable='ros2_control_node',
            name='controller_manager',
            parameters=[controller_config_file],
            output='screen'
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen'),
                        # Запуск клиента Gazebo (GUI)
        ExecuteProcess(
            cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so'],
            output='screen'
        ),
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            name='spawn_robot',
            arguments=[
                '-entity', 'combo_bot',           # Имя робота
                '-topic', '/robot_description'   # Откуда брать URDF
            ],
            output='screen',
        ),
    ])