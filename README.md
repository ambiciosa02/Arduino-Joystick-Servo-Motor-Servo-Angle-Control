# Arduino-Joystick-Servo-Motor-Servo-Angle-Control
This Arduino sketch is a Joystick-controlled servo motor project. It allows you to control the angle of a servo motor using the horizontal axis of a joystick.

🔍 How it works
1️⃣ Hardware setup

Joystick → VRx (horizontal) connected to A0

Servo motor → signal pin connected to pin 9

Arduino board

2️⃣ Program flow

Setup:

Attach the servo to pin 9 using servoPan.attach(9).

Loop:

Read the joystick horizontal axis with analogRead(JOY_X).

Map the analog value (0–1023) to a servo angle (0–180°).

Set the servo position using servoPan.write(angle).

Wait 15 ms for the servo to reach the position.

3️⃣ What you’ll see

Moving the joystick left or right rotates the servo correspondingly.

Full left → 0°, center → ~90°, full right → 180°.
