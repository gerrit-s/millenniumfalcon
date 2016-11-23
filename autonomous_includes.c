void autonomous_program()
{
	motor[port1] = 67;
	motor[port2] = 67;
	motor[port9] = 67;
	motor[port10]= 67;
	wait1Msec(1000);

	motor[port1] = 0;
	motor[port2] = 0;
	motor[port9] = 0;
	motor[port10]= 0;
	wait1Msec(1000);
}
