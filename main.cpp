#include <iostream>

#include "rlottie.h"


struct CmdArgs {
  std::string inputPath;

  CmdArgs(int argc, char** argv) {
    if (argc < 2) {
      std::cout << "Usage: " << argv[0] << " <input>" << std::endl;
      exit(1);
    }

    inputPath = argv[1];
  }
};

int main(int argc, char** argv) {
  CmdArgs args(argc, argv);

  auto animation = rlottie::Animation::loadFromFile(args.inputPath, true);
  if (animation == nullptr) {
    std::cout << "Failed to load animation" << std::endl;
    return 1;
  }

  std::cout << "Animation loaded" << std::endl;
  return 0;
}
