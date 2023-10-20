#include <iostream>
#include <string>
#include "Quizz.h"



using namespace std;  // This line brings the entire std namespace into the current scope, which can be both convenient and problematic.

// These functions are getter functions for a class named 'Question'. They return the values of various attributes of a question object.

std::string Question::getTexte_Question() const {
    return Texte_Question;  // Get the text of the question.
}

std::string Question::getReponse_1() const {
    return Reponse_1;  // Get the text of the first answer.
}

std::string Question::getReponse_2() const {
    return Reponse_2;  // Get the text of the second answer.
}
 
std::string Question::getReponse_3() const {
    return Reponse_3;  // Get the text of the third answer.
}

std::string Question::getReponse_4() const {
    return Reponse_4;  // Get the text of the fourth answer.
}

int Question::getReponse_Correcte() const {
    return Reponse_Correcte;  // Get the index of the correct answer.
}

int Question::getScore_Question() const {
    return Score_Question;  // Get the score associated with the question.
}

//setters

void Question::setTexte_Question(std::string nouveauTexte_Question) {
    // Cette fonction permet de définir le texte de la question.
    Texte_Question = nouveauTexte_Question;
}

void Question::setReponse_1(std::string nouveauReponse_1) {
    // Cette fonction permet de définir le texte de la première réponse.
    Reponse_1 = nouveauReponse_1;
}

void Question::setReponse_2(std::string nouveauReponse_2) {
    // Cette fonction permet de définir le texte de la deuxième réponse.
    Reponse_2 = nouveauReponse_2;
}

void Question::setReponse_3(std::string nouveauReponse_3) {
    // Cette fonction permet de définir le texte de la troisième réponse.
    Reponse_3 = nouveauReponse_3;
}

void Question::setReponse_4(std::string nouveauReponse_4) {
    // Cette fonction permet de définir le texte de la quatrième réponse.
    Reponse_4 = nouveauReponse_4;
}

void Question::setReponse_Correcte(int nouveauReponse_Correcte) {
    // Cette fonction permet de définir l'indice de la réponse correcte.
    Reponse_Correcte = nouveauReponse_Correcte;
}

void Question::setScore_Question(int nouveauScore_Question) {
    // Cette fonction permet de définir le score associé à la question.
    Score_Question = nouveauScore_Question;
}


int Deviner;  // Variable pour stocker la réponse du joueur.
int Totale;   // Variable pour stocker le score total du joueur.

void Startup() {
    // Cette fonction affiche un message de démarrage lorsque le jeu est lancé.
    std::cout << "Lancer le jeu " << std::endl;
}

void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    // Cette fonction de la classe Question permet de définir les valeurs d'une question.
    // Elle prend en paramètre le texte de la question (q), les textes des quatre réponses (a1, a2, a3, a4),
    // l'indice de la réponse correcte (ca), et le score associé à la question (pa).

    // Affecter les valeurs aux attributs de la question.
    Texte_Question = q;
    Reponse_1 = a1;
    Reponse_2 = a2;
    Reponse_3 = a3;
    Reponse_4 = a4;
    Reponse_Correcte = ca; // Indice de la réponse correcte.
    Score_Question = pa;   // Score associé à la question.
}


void Question::askQuestion() {
    cout << endl;
    std::cout << Texte_Question << std::endl; // Affiche le texte de la question.

    // Affiche les quatre réponses possibles, numérotées de 1 à 4.
    std::cout << "1. " << Reponse_1 << std::endl;
    std::cout << "2. " << Reponse_2 << std::endl;
    std::cout << "3. " << Reponse_3 << std::endl;
    std::cout << "4. " << Reponse_4 << std::endl;

    cout << endl;

    std::cout << "Reponse: " << std::endl;
    std::cin >> Deviner; // Demande au joueur de deviner la réponse et stocke la réponse dans la variable Deviner.

    if (Deviner == Reponse_Correcte) {
        cout << endl;
        std::cout << "Tres bien ! Vous avez raison." << std::endl;
        Totale += Score_Question; // Ajoute le score de la question au score total.
        std::cout << "Score: " << Score_Question << " En dehors de " << Score_Question << " !" << std::endl;
    } else {
        cout << endl;
        std::cout << "Oh, NON. Vous avez tort." << std::endl;
        std::cout << "Vous gagnez 0 !" << " En dehors de " << Score_Question << " !" << std::endl;
        std::cout << "La bonne réponse est " << Reponse_Correcte << std::endl;
        cout << endl;
    }
}


// Fonction pour quitter le jeu
void ExitApp() {
    std::cout << "A la prochaine." << std::endl;
    Replay();
    exit(0);
}

void QuestionPose1() {

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;


    q1.setValues("1.Quel est le premier satellite envoye dans l'espace ?", "Spoutnik 1", " Explorer 4", "la-lune", "La-Terre", 1, 10);

    q2.setValues("2.Quelle est la capital de l'australie ?", "Dublin", "Canberra", "Paris", "Sydney", 2, 10);

    q3.setValues("3.Qui a ecrit L'Odyssee", "Bart", "Emile Zola Right-left", "Homere", "Jean de la Fontaine", 3, 10);

    q4.setValues("4.Quel pays est celebre pour sa Grande Muraille ?", "France", "Maroc", "Chine", "Allemagne", 3, 10);

    q5.setValues("4.Qui a peint la Mona Lisa ?", "Vincent van Gogh", "Pablo Picasso", "Leonardo da Vinci", "Rembrandt", 3, 10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();

    system("cls");

    std::cout << "Votre score Totale est de " << Totale << " points sur 150." << std::endl;

    if (Totale >= 30)
    {
        cout << "Bien joue tu as passe le quiz!" << endl;
        cout << "Felicitation" << endl;

    }        //end of the game
    else
    {
        std::cout << "Desole vous avez rate le quiz!" << std::endl;
    }

    std::cout << "Veut-tu rejoue (O/N) " << std::endl;
    string play_again;
    std::cout << "Ton choix: ";
    std::cin >> play_again;
    if (play_again == "O" || play_again == "o")
    {
        Theme();
    }
    else
    {
        std::cout << "OK. Au revoir." << std::endl;
    }
}

//Question 2
void QuestionPose2() {

    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;


    q6.setValues("1. Quelle est l'instruction en C pour afficher du texte a l'ecran?", "print(''Hello, World!'');", "echo ''Hello, World!'';", "printf(''Hello, World!'');","system.out.println(''Hello, World!'');", 3, 10);

    q7.setValues("2.Quelle est la declaration correcte d'une variable entière en C?", "integer x", "int x", "x = int", "float x", 2, 10);

    q8.setValues("3.Comment commentez-vous votre code en C?", "Utilisez // pour les commentaires en ligne, ou /* */", " le symbole '#'", "a syntaxe comment:", "la syntaxe '--'  ", 1, 10);

    q9.setValues("4.Quel operateur est utilise pour comparer l'egalite de deux valeurs en C ?", "=", "==", "===", " !=", 2, 10);

    q10.setValues("5.Quelle est la boucle la plus couramment utilisee pour repeter une partie de code un nombre specifie de fois ?", "if;", "swith;", "and;", "for", 4, 10);


    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
    system("cls");

    cout << "Le total de ton score est de  " << Totale << " points sur 100." << endl;

    if (Totale >= 30)
    {
        cout << "Bien joue tu as passe le quiz!" << endl;
        cout << "Felicitation" << endl;
        
        

    }        //end of the game
    else
    {
        std::cout << "Desole vous avez rate le quiz!" << std::endl;
    }

    std::cout << "Veut-tu rejoue (O/N) " << std::endl;
    string play_again;
    std::cout << "Ton choix: ";
    std::cin >> play_again;
    if (play_again == "O" || play_again == "o")
    {
        Theme();

    }
    else
    {
        std::cout << "OK. Au revoir." << std::endl;
    }
}

void QuestionPose3() {


    Question q11;
    Question q12;
    Question q13;
    Question q14;
    Question q15;


    q11.setValues("11.Quelle entreprise a cree la celebre serie de jeux Pokemon?", "l'entreprise japonaise Game Freak", "la societe  Game World Adventures.", "l'entreprise  Monstres de Poche Inc", "Bandai Namco", 1, 10);
    
    q12.setValues("12.Quel jeu video populaire met en scene des animaux anthropomorphes vivant dans une ville et a ete developpe par Nintendo ?", "Super Mario World", "Zelda's Animal Town", "Animal Crossing", "Call Of Duty", 3, 10);
    q13.setValues("13. Quel jeu video permet aux joueurs de construire des mondes virtuels avec des blocs de differentes couleurs ?", "Minecraft", "Fortnite", "Grand Theft Auto V", "Valorant", 1, 10);
    q14.setValues("14.quel est le jeu de societe le plus ancien ?", "Monopoly", "Jurassic Park", "Senet", "Tetris", 3, 10);
    q15.setValues("15.Lequel de ces personnages n'est pas issu de l'univers de Mario ?", "Peach", "Bowser", "Tail", "Luigi", 2, 10);

    q11.askQuestion();
    q12.askQuestion();
    q13.askQuestion();
    q14.askQuestion();
    q15.askQuestion();

    system("cls");

    std::cout << "Ton score Totale est " << Totale << "point sur 150." << std::endl;

    if (Totale >= 30)
    {
        cout << "Bien joue tu as passe le quiz!" << endl;
        cout << "Felicitation" << endl;
    }        //end of the game
    else
    {
        std::cout << "Desole vous avez rate le quiz!" << std::endl;
    }

    std::cout << "Veut-tu rejoue (O/N) " << std::endl;
    string play_again;
    std::cout << "Ton choix: ";
    std::cin >> play_again;
    if (play_again == "O" || play_again == "o")
    {
        Theme();

    }
    else
    {
        std::cout << "OK. Au revoir." << std::endl;
    }
}

void Theme() {
    std::cout << "Choisissez un des themes qui sont presents ! \n" << std::endl;
    std::cout << "   [1] Culture general" << std::endl;
    std::cout << "   [2] Langage C " << std::endl;
    std::cout << "   [3] Jeux video \n" << std::endl;
    std::cout << "Choisie une option: ";

    int Menu = 3;
    std::cin >> Menu;

    // Appelle � la fonction

    switch (Menu)
    {
    case 1:
        QuestionPose1();
        break;

    case 2:
        QuestionPose2();
        break;

    case 3:
        QuestionPose3();
        break;

    default :
        ExitApp();
        break;
    }
}

// Fonction qui sert à guider le joueur
void MainMenu() {
    system("color 5F");
    std::cout << "\t\t*************************************************************************************" << std::endl;
    std::cout << "\t\t*****                                                                           *****" << std::endl;
    std::cout << "\t\t*****                            BIENVENUE DANS LE QUIZ                         *****" << std::endl;
    std::cout << "\t\t*****                          CE QUIZ PRESENTE 3 THEMES                        *****" << std::endl;
    std::cout << "\t\t*****                                BON COURAGE                                *****" << std::endl;
    std::cout << "\t\t*****                                                                           *****" << std::endl;
    std::cout << "\t\t************************************************************************************* \n" << std::endl;


    string Name;
    std::cout << "Entre ton pseudo? " << std::endl;
    getline(cin, Name);

    std::cout << "   [1] Commencer le quiz" << std::endl;
    std::cout << "           ou " << std::endl;;
    std::cout << "   [2] Quitter le jeu \n" << std::endl;
    std::cout << "Choisit une option " << Name << " ?" << std::endl;


    int MenuChoice;
    std::cin >> MenuChoice;

    // Appelle à la fonction

    switch (MenuChoice)
    {
    case 1:
        Theme();
        break;

    case 2:
        ExitApp();
        break;

    default:
        std::cout << "Au revoir !" << std::endl;
        break;
    }
}
// Declarez cette fonction au debut de votre code pour la rendre accessible aux autres fonctions.
void Replay() {
    char choix;

    printf("Veux tu rejouer? (O/N) : ");
    fflush(stdin);
    scanf(" %c", &choix);

    if (choix == 'O' || choix == 'o') {
        // Si le joueur veut rejouer, appelez la fonction Game pour demarrer une nouvelle partie.
        Theme();
    }
    else if (choix == 'N' || choix == 'n') {
        printf("Merci d'avoir joue ! Au revoir.\n");
        //ExitApp(); // Vous pouvez egalement ajouter un appel à la fonction ExitApp pour quitter l'application ici.
    }
    else {
        // Reponse non valide, redemandez.
        printf("Reponse incorrecte. Veuillez repondre par O(oui) ou N(non)\n");
        // Appel recursif pour redemander la reponse.
    }
}
