//main.cpp: a small demo project for the np build system

//Includes
#include <iostream> //Console I/O streams
#include "physics.hpp" //complicated ballistics simulations
#include "file.hpp" //file writing "utilities"

int main(int argc, char *argv[]) {
  std::cout << "this was compiled with np. beginning nuclear ballistics simulation..." << std::endl;
  rollingball();
  std::cout << "simulation complete. saving data to disk but not really..." << std::endl;
  writefile();

  return 0;
}