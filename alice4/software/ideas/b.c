#include <gl.h>



float b_data[][2] = {
	{1.437827, 15.482255},
	{3.711599, 15.716075},
	{2.658307, 15.315240},
	{3.477534, 15.081420},
	{2.741902, 14.997912},
	{2.006270, 7.983298},
	{0.234065, 3.139875},
	{1.103448, 4.192067},
	{1.538140, 3.139875},
	{1.404389, 3.958246},
	{2.374086, 3.306889},
	{2.792058, 3.807933},
	{3.243469, 3.691023},
	{3.544410, 4.158664},
	{4.497388, 4.776618},
	{3.979101, 4.759916},
	{4.815047, 5.227557},
	{4.413793, 5.979123},
	{5.400209, 6.864301},
	{4.497388, 8.133612},
	{5.667712, 8.734864},
	{4.263323, 9.002088},
	{5.416928, 9.686848},
	{4.012539, 9.219207},
	{4.898642, 10.020877},
	{3.494253, 9.118998},
	{3.745037, 9.620042},
	{2.775340, 8.684760},
	{2.708464, 8.835073},
	{1.805643, 7.382046},
	{1.688610, 7.582463},

};

draw_b() {

    bgntmesh();
	v2f(b_data[0]);
	v2f(b_data[1]);
	v2f(b_data[2]);
	v2f(b_data[3]);
	v2f(b_data[4]);
	v2f(b_data[5]);
	v2f(b_data[6]);
	v2f(b_data[7]);
	v2f(b_data[8]);
	v2f(b_data[9]);
	v2f(b_data[10]);
	v2f(b_data[11]);
	v2f(b_data[12]);
	v2f(b_data[13]);
	v2f(b_data[14]);
	v2f(b_data[15]);
	v2f(b_data[16]);
	v2f(b_data[17]);
	v2f(b_data[18]);
	v2f(b_data[19]);
	v2f(b_data[20]);
	v2f(b_data[21]);
	v2f(b_data[22]);
	v2f(b_data[23]);
	v2f(b_data[24]);
	v2f(b_data[25]);
	v2f(b_data[26]);
	v2f(b_data[27]);
	v2f(b_data[28]);
	v2f(b_data[29]);
	v2f(b_data[30]);
    endtmesh();

    bgnline();
	v2f(b_data[0]);
	v2f(b_data[2]);
	v2f(b_data[4]);
	v2f(b_data[6]);
	v2f(b_data[8]);
	v2f(b_data[10]);
	v2f(b_data[12]);
	v2f(b_data[14]);
	v2f(b_data[16]);
	v2f(b_data[18]);
	v2f(b_data[20]);
	v2f(b_data[22]);
	v2f(b_data[24]);
	v2f(b_data[26]);
	v2f(b_data[28]);
	v2f(b_data[30]);
	v2f(b_data[29]);
	v2f(b_data[27]);
	v2f(b_data[25]);
	v2f(b_data[23]);
	v2f(b_data[21]);
	v2f(b_data[19]);
	v2f(b_data[17]);
	v2f(b_data[15]);
	v2f(b_data[13]);
	v2f(b_data[11]);
	v2f(b_data[9]);
	v2f(b_data[7]);
	v2f(b_data[5]);
	v2f(b_data[3]);
	v2f(b_data[1]);
	v2f(b_data[0]);
    endline();

}

