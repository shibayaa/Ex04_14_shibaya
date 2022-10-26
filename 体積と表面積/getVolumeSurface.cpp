double getVolumeSurface(double wide, double height, double depth, double* surface)
{
	*surface = 2 * (wide * height + wide * depth + height * depth);
	return wide * height * depth;
}