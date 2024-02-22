#include <iostream>
#include<boost/program_options.hpp>

namespace opt = boost::program_options;


int main(int argc, char *argv[]) {
    opt::options_description desc("All options");
    desc.add_options() 
        ("apples", opt::value<int>(), "How man Apples do you have?")
        ("oranges", opt::value<int>(), "How man Oranges do you have?")
        ("help", opt::value<int>(), "Produce Help message");    

    opt::variables_map vm;

    opt::store(opt::parse_command_line(argc, argv, desc), vm);

    opt::notify(vm);

    if(vm.count("help")) {
        std::cout << desc << "/n";
        return 1;
    }

    if (vm.count("apples") && vm.count("oranges")) {
    std::cout << "Fruits count: "
              << vm["apples"].as<int>() + vm["oranges"].as<int>()
              << std::endl;
    } else {
        std::cout << "Please provide values for apples and oranges." << std::endl;
    }

}