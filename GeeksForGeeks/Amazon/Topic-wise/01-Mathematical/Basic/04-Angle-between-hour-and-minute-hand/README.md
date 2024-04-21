# Algorithm

1. Calculate the angle made by hour hand with respect to 12:00 in h hours and m minutes.

2. Calculate the angle made by minute hand with respect to 12:00 in h hours and m minutes.

3. The difference between the two angles is the angle between the two hands.

&nbsp;

&nbsp;

# How to calculate the two angles with respect to 12:00?

The minute hand moves =>
in 60 minute it moves 360 degrees
so, in 1 min it moves (360/60) = 6 degrees

The hour hand moves =>
in 12 hours or 720 mins it moves 360 degrees
So, in 1 minute it moves (360/720) = 0.5 degrees

the minute hand would move (h\*60 + m) \* 6
and hour hand would move (h \* 60 + m) \* 0.5

&nbsp;

# Calculate the angles moved by hour and minute hands with reference to 12:00

hour_angle = 0.5 \*(H\* 60 + M)

minute_angle = 6 \* M
