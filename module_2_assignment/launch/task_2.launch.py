from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    TurtleSim = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name='simulator'
    )
    radius = '1'  #initial radius of spiral
    growth_rate = '1'  # koefficient of spiral growth
    SpiralTurtle = Node(
        package='module_2_assignment',
        executable='task1_spiral',
        name='archi_spiral',
        arguments=[radius, growth_rate]    
    )
    return LaunchDescription([
        TurtleSim, SpiralTurtle
    ])