#pragma once
#ifndef Quizz_H
#define Quizz_H
#include <string>
#include <vector>
#include <iostream>


void Startup();
void MainMenu();
void Theme();
void QuestionPose1();
void QuestionPose2();
void QuestionPose3();
void Replay();
void ExitApp();
//void Game1();
//void Game2();
//void Game3();

class Question {
private:
    std::string Texte_Question;
    std::string Reponse_1;
    std::string Reponse_2;
    std::string Reponse_3;
    std::string Reponse_4;
    int Reponse_Correcte;
    int Score_Question;

public:
    void setValues( std::string,  std::string,  std::string,  std::string,  std::string, int, int);
    
    void askQuestion();

    //getters
    std::string getTexte_Question() const;
    
    std::string getReponse_1() const;
    
    std::string getReponse_2() const;
     
    std::string getReponse_3() const;
    
    std::string getReponse_4() const;
    
    int getReponse_Correcte() const;
    
    int getScore_Question() const;
    
    //setters
    
    void  setTexte_Question(std::string nouveauTexte_Question );
    
    void  setReponse_1(std::string nouveauReponse_1) ;
    
    void  setReponse_2(std::string nouveauReponse_2) ;
     
    void  setReponse_3(std::string nouveauReponse_3) ;
    
    void  setReponse_4(std::string nouveauReponse_4) ;
    
    void  setReponse_Correcte(int nouveauReponse_Correcte) ;
    
    void  setScore_Question(int nouveauScore_Question) ;
    
};

#endif Quiz_H
