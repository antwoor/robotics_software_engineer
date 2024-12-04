from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python import get_package_share_directory
import os

def generate_launch_description():
    pkg_path = get_package_share_directory('module_3_assignment')
    urdf_file = os.path.join(pkg_path, 'urdf', 'tf_tree.urdf')
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
             arguments=[urdf_file]),
             
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen')
    ])