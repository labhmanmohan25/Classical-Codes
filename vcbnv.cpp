#include <conio.h>
//Acknowledgment: Thanks goes to the following webpages which provided the
//info needed to read the arrow keys from the keyboard (used in getKeyPress):
//	http://www.daniweb.com/software-development/cpp/code/216732
//	http://www.codingforums.com/archive/index.php/t-100973.html
char getKeyPress()
{
	char key = 127;

	key = _getch();
	
	if (key == 0 || key == -32)  //get a special key
	{
		key = _getch();

		if (key == 72) //up arrow
		{
			key = 'u';
		}
		else if (key == 75) //left arrow
		{
			key = 'l';
		}
		else if (key == 77) //right
		{
			key = 'r';
		}
		else if (key == 80) //down
		{
			key = 'd';
		}
	}
	return key;
}
