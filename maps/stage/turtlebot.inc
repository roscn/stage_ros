define kinect ranger
(
  sensor
  (
    #range_max 16
    range [ 0.0 16.0 ]
    fov 360.0
    samples 720
  )
  # generic model properties
  color "black"
  size [ 0.00 0.0 0.00 ]
)

define turtlebot position
(
  pose [ 0.0 0.0 0.0 0.0 ]

  odom_error [0.03 0.03 999999 999999 999999 0.02]

  size [ 0.27 0.22 0.01 ]
  origin [ 0.0 0.0 0.0 0.0 ]
  gui_nose 1
  drive "diff"
  color "gray"
  
  kinect(pose [ 0.0 0.0 0.0 0.0 ])
)
