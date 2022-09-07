#include <iostream>
#include <unistd.h>
#include <signal.h>

void cleanup(){
	std::cout << "Done waiting" << std::endl;
}
void handler(int sig){
  std::cout << "Provided with signal " << sig << std::endl;
	atexit(cleanup);
	exit(0);
}

int main(){
  signal(SIGTERM, handler);
	signal(SIGKILL, handler);

	std::cout << "Start waiting" << std::endl;
  while (true){
		sleep(1);
		std::cout << "Keep waiting" << std::endl;
	}
	return 0;
}
