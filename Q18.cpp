//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main()
//{
//	const int PaintPerGallon = 120;
//	float DoorLength, DoorWidth, Window1Length, Window1Width, Window2Length, Window2Width, BookLength, BookWidth;
//	float RoomLength, RoomWidth, RoomHeight;
//	float DoorArea, Window1Area, Window2Area, BookArea, WallArea, TotalArea;
//	float PaintNeeded;
//	cout << "Enter length of Door: ";
//	cin >> DoorLength;
//	cout << "Enter width of Door: ";
//	cin >> DoorWidth;
//	DoorArea = DoorLength * DoorWidth;
//	cout << "Enter length of 1st Window: ";
//	cin >> Window1Length;
//	cout << "Enter width of 1st Window: ";
//	cin >> Window1Width;
//	Window1Area = Window1Length * Window1Width;
//	cout << "Enter length of 2nd Window: ";
//	cin >> Window2Length;
//	cout << "Enter width of 2nd Window: ";
//	cin >> Window2Width;
//	Window2Area = Window2Length * Window2Width;
//	cout << "Enter length of Book shelf: ";
//	cin >> BookLength;
//	cout << "Enter width of Book shelf: ";
//	cin >> BookWidth;
//	BookArea = BookLength * BookWidth;
//	cout << "Enter length of Room:";
//	cin >> RoomLength;
//	cout << "Enter width of Room: ";
//	cin >> RoomWidth;
//	cout << "Enter height of Room: ";
//	cin >> RoomHeight;
//	WallArea = (2 * RoomHeight * RoomLength) + (2 * RoomHeight * RoomWidth) - (RoomLength * RoomWidth);
//	TotalArea = WallArea - DoorArea - Window1Area - Window2Area - BookArea;
//	PaintNeeded = TotalArea / PaintPerGallon;
//	cout << "You would need a total of " << PaintNeeded << " gallons of paint to paint the walls of the room.";
//	return 0;
//}