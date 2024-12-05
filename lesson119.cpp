#include <iostream>

using namespace std;

class GamePlayer {
public:
	void Fire() {


	};

	void SetPlayerSpeed(int Speed) {
		if (Speed > 0)
			PlayerSpeed = Speed;
	};

private:
	int PlayerSpeed;
};

/*
int main() {
	GamePlayer HeroPlayer;
	GamePlayer EnemyPlayer;

	HeroPlayer.SetPlayerSpeed(90);

	return 0;
}
*/