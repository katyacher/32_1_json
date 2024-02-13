#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <nlohmann/json.hpp>

int main(int, char**){
    std::cout << "Hello, from 32_1_json.\n";

    std::ofstream file("films.json");

    nlohmann::json dict = {
        {"title", "Amelie"},
        {"country", "France"},
        {"date", "25 April 2001"},
        {"studio", "Claudie Ossard Productions"},
        {"story_by","Guillaume Laurant,Jean-Pierre Jeunet"},
        {"director","Jean-Pierre Jeunet"},
        {"producer","Jean-Marc Deschamps,Claudie Ossard"},
        {"actors", {
            {"Audrey Tautou","Amélie Poulain"},
            {"Mathieu Kassovitz","Nino Quincampoix"},
            {"André Dussollier","The Narrator"},
            {"Rufus", "Raphaël Poulain, Amélie's father"},
            {"Lorella Cravotta" ,"Amandine Poulain, Amélie's mother"},
            {"Jamel Debbouze", "Lucien"}
        }}
    };

    file << std::setw(4) << dict << std::endl;

    return 0;
}
