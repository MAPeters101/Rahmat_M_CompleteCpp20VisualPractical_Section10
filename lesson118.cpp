#include <iostream>

using namespace std;

class GamePlayer {
public:
	int PlayerSpeed{};

	void Fire() {
		PlayerSpeed = 600;
	};
};

/*
int main() {
	GamePlayer HeroPlayer;
	GamePlayer EnemyPlayer;

	HeroPlayer.PlayerSpeed = 600;
	HeroPlayer.Fire();

	EnemyPlayer.PlayerSpeed = 500;
	EnemyPlayer.Fire();

	std::unique_ptr<GamePlayer> MainPlayer = std::make_unique<GamePlayer>();
	(*MainPlayer).PlayerSpeed = 600;
	(*MainPlayer).Fire();

	MainPlayer->Fire();
	MainPlayer->PlayerSpeed = 700;

	return 0;
}
*/

