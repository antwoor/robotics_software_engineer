# Module 4 Assignment: Sensor Data Manipulation for Robot Control

## Tasks
### ATTENTION
if you use anaconda then type
```bash
  conda deactivate
```
iif you haven`t ever used **conda** then comment these lines in **CMakeLists.txt**
```cmake
  target_link_libraries(lineFollowing ${CURL_LIBRARIES})
  target_link_libraries(lineFollowing TIFF::TIFF)
```
### Task 1: Restructure Line Following Project Code
```bash
  export TURTLEBOT3_MODEL=waffle
```
```bash 
  colcon build --symlink install && source install/setup.bash
  ```
```bash 
  ros2 launch module_4_assignment camera_line_following.launch.py
  ```
### Task 2: Design Software Flow for Maze Solving

Open task2.drawio 

### Task 3: Implement Maze Solving in Gazebo
  ```bash
    export TURTLEBOT3_MODEL=waffle
  ```
  ```bash
  ros2 launch module_4_assignment lidar_maze_solving.launch.py  
  ```

### Task 4: Fix Errors in Launch Files
- ### the error debugging process.

   fixed spawning position and ancessing of turtlebot3_gazebo.launch
  ```python
    x_pose = '-5.09'
    y_pose = '2.07'
    spawn_turtlebot_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(launch_file_dir, 'spawn_turtlebot3.launch.py')
        ),
        launch_arguments={
        'x_pose': x_pose,
        'y_pose': y_pose
        }.items()
    )
    ```
    fixed .world pathes for meshes also
  - ### lidar_maze_solving fixes
  fixed default position and topic for subscribing
  ```python
  x_pose = LaunchConfiguration('x_pose', default='-8.980152')
  y_pose = LaunchConfiguration('y_pose', default='7.135622')
  ```
- ### summary of the errors encountered 

### Submission Process

1. **Create Files:**
   - Navigate to the `module_4_assignment` package.
   - Create the required files, including the maze environment, refactored code, and debugging documentation.

2. **Document Your Work:**
   - Create a `README.md` file in the `module_4_assignment` package.
   - Provide details about the files you created, including explanations of the code and the commands needed to run your simulations and tests.

3. **Submit Your Assignment:**
   - Push your changes to your forked repository.
   - Provide your repository link in the assignment submission text area.
   - **Note**: Ensure you press the "Start Assignment" button when you see the page (as it takes time to generate the pages).

4. **Wait for Review:**
   - Wait for the instructors to review your submission.

## Learning Outcome

By completing this assignment, you will:
- Learn to control robots based on sensor data.
- Improve your skills in debugging and fixing issues in complex robotic systems.