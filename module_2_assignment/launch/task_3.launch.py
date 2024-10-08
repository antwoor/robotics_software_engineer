from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    TurtleSim = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='simulator'
    )

    spawn_turtle2 = ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 1.0, y: 1.0, theta: 1.57, name: 'second'}\""],
        name='spawn_turtle2',
        shell = True
    )

    spawn_turtle3 = ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 2.0, y: 2.0, theta: 1.57, name: 'third'}\""],
        name='spawn_turtle3',
        shell = True
    )

    spawn_turtle4 = ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 3.0, y: 3.0, theta: 1.57, name: 'fourth'}\""],
        name='spawn_turtle4',
        shell = True
    )

    spawn_turtle5 = ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/spawn', 'turtlesim/srv/Spawn', "\"{x: 4.0, y: 4.0, theta: 1.57, name: 'fifth'}\""],
        name='spawn_turtle5',
        shell = True
    )
    # radius = '1'  #initial radius of spiral
    # growth_rate = '1'  # koefficient of spiral growth
    # SpiralTurtle = Node(
    #     package='module_2_assignment',
    #     executable='task1_spiral',
    #     name='archi_spiral',
    #     arguments=[radius, growth_rate]    
    # )
    
    return LaunchDescription([
        TurtleSim, spawn_turtle2, spawn_turtle3, spawn_turtle4, spawn_turtle5
    ])