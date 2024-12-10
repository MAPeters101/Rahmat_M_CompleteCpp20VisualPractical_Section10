#include <iostream>

using namespace std;

class GamePlayer {
public:
	void Fire();
	void SetPlayerSpeed(int Speed);

private:
	int PlayerSpeed;
};

/*
int main() {
	GamePlayer HeroPlayer;
	GamePlayer EnemyPlayer;

	HeroPlayer.Fire();
	HeroPlayer.SetPlayerSpeed(90);

	EnemyPlayer.Fire();
	EnemyPlayer.SetPlayerSpeed(80);

	return 0;
}


void GamePlayer::Fire() {

}

void GamePlayer::SetPlayerSpeed(int Speed) {
	if (Speed > 0)
		PlayerSpeed = Speed;
}
*/