#include <string>

using namespace std;

enum MAGICTYPE {NONE, FIRE, ICE, EARTH, WATER};

string displayMagic(const Chocobo &);
string displayMagicStatic(const Chocobo &);

int main()
{
	Chocobo bird;
	FireChocobo fireBird;
	IceChocobo iceBird;
	EarthChocobo earthBird;
	WaterChocobo waterBird;

	//Bird 2 is a fire bird
	Chocobo* bird2 = &fireBird;

	cout << "The following are the Chocobo magic descriptions:" << endl;

	//The Following uses dynamic binding

	cout << "Bird object has magic type: " << displayMagic(bird) << endl;
	cout << "Fire bird object has magic type: " << displayMagic(fireBird) << endl;
	cout << "Ice bird object has magic type: " << displayMagic(iceBird) << endl;
	cout << "Earth bird object has magic type: " << displayMagic(earthBird) << endl;
	cout << "Water bird object has magic type: " << displayMagic(waterBird) << endl;
	cout << "Bird 2 object has magic type: " << displayMagic(bird2) << endl;

	cout << endl << endl;

	//The following use static binding
	cout << "Bird object has magic type: " << displayMagicStatic(bird) << endl;
	cout << "Fire bird object has magic type: " << displayMagicStatic(fireBird) << endl;
	cout << "Ice bird object has magic type: " << displayMagicStatic(iceBird) << endl;
	cout << "Earth bird object has magic type: " << displayMagicStatic(earthBird) << endl;
	cout << "Water bird object has magic type: " << displayMagicStatic(waterBird) << endl;
	cout << "Bird 2 object has magic type: " << displayMagicStatic(bird2) << endl;

	return 0;
}

string displayMagic(const Chocobo &bird) {
	string magicDescription = "none";
	switch (bird.getMagicType()) {
	case NONE:
		magicDescription = "None";
		break;

	case FIRE:
		magicDescription = "Fire";
			break;
	case ICE:
		magicDescription = "Ice";
			break;

	case EARTH:
		magicDescription = "Earth";
		break;
	case WATER:
		magicDescription = "Water";
			break;
	}
	return magicDescription;

}

string displayMagic(const Chocobo &bird) {
	string magicDescription = "none";
	switch (bird.getMagicType()) {
	case NONE:
		magicDescription = "None";
		break;

	case FIRE:
		magicDescription = "Fire";
		break;
	case ICE:
		magicDescription = "Ice";
		break;

	case EARTH:
		magicDescription = "Earth";
		break;
	case WATER:
		magicDescription = "Water";
		break;
	}
	return magicDescription;

}