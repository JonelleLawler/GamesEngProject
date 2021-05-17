#pragma once 
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 
#include"ThreadPool.h"
#include<iostream>
#include"Game.h"
int main() {

	
	Game game;
	game.run();


	ThreadPool pool(100); //creates an instance of the threadpool with 100 threads


	// pool.enqueue(job to do so here our astar)

	// auto future = pool.enqueue(jobWithReturn);

   //	std::string returnedString = future.get(); //future.get() blocks until the value is ready to be obtained

}
