#include <iostream>


int main() {

  //Attack of Titans - text adventure:
  int input1;
  int input2;
  const int max_tries = 3; 

  //Beginning / Prelude:
  std::cout << "Attack of the Titans.\n" 
  << "The Beast Titan attempted to besieged the Rose Wall and failed terribly; albeit heavy losses from Eren and friends. While the Beast Titan attempted to retreat, Eren and friends managed to capture the Giant Titan. This is their only chance to revive either their commander, Erwin Smith who led humanity to defeat the Beast Titan with his ingenuity, tactical wits and admirable selflessness, or Armin who shown great compassion to his peer and utilized his ingenuity to pull Eren and Mikasa out of trouble since their childhood.\n";

  //First Branch
  std::cout << "Now it's your choice, Hange, to decide who shall live. Their lives are in your hand...\n"
  << " 1) Choose Erwin, the commander of the Scouts Regiment.\n"
  << " 2) Choose Armin, the prodige and Eren's and Mikasa's childhood friend.\n"
  << "Your choice: ";

  std::cin >> input1;

  // Validate input
  for (int i = 0; input1 < 1 || input1 > 2; i++){
    if (i >= max_tries) {
      std::cout << "Stop fooling around! This isn't a game, please leave.";
      return 0;
    }

    std::cout << "Invalid input. Please try again: ";
    std::cin >> input1;
  }
  //If Erwin is chosen
  if (input1 == 1){
    std::cout << "Wise choice...\n" 
    << "Commander Erwin managed to revive and Armin ceased to exist. While bearing a heavy heart, both Eren and Mikasa understood the intent of the choice and accepted the decision. After a failed siege from the Beast Titan, the group managed to learn about the weakness of the Beast Titan - the nap of titan. With great command and tactical wits, commander Erwin and the team managed to outmanuever the Titans in every attack and arrived at the HQ of the Titan.\n"
    << "At this point, Commander Erwin is able to utilize the Giant Titan to grow into a gigantic titan growing to 1000 feet tall. Achieving this size would gain tremendous attacking advantage as towers and buildings can be squashed with his mere foot. However he will be very vulnerable as he is slow and the team would lose a field commander on the battleground. \n"
    << " 1) Turn Commander Erwin into a Giant Titan.\n"
    << " 2) Let Commander Erwin take charge of the battleground. \n"
    << "Which would you choose? Your choice: ";
    std::cin >> input2;

      // Validate input
    for (int i = 0; input2 < 1 || input2 > 2; i++){
      if (i >= max_tries) {
        std::cout << "Stop fooling around! This isn't a game, please leave.";
        return 0;
      }

      std::cout << "Invalid input. Please try again: ";
      std::cin >> input2;
    }

    //Turn Commander Erwin into a Giant Titan:
    if(input2 == 1){
      std::cout << "Commander Erwin turns into a Giant Titan and demolishes buildings, squashing any defenses the titans had built up in anticipation to this attack. With careful planning and superb execution, the team slaughtered every last Titan and tortured the Beast Titan. The secret of the birth of the Titans were leaked out. And the team moved on to their conquest to save humanity. Good Job, you won! ";
      return 0;
    }
    else{
      std::cout << "Commander Erwin remained as the field commander. Without the Giant Titan, the reinforcement built up at the Titan's HQ proved to be stronger than what the team had anticipated. Many lives were lost and eventually Commander Erwin ordered a retreat. The Titans survived and the war between humanity and titans ceased to end...\n"
      << "YOU LOST!";
      return 0;
    }

  }
  //Armin is chosen
  else{
    std::cout << "Excellent choice... However, Armin's moral compass proved to be much of a hindrance when it comes to chosing to activate his Giant Titan. His fear of squashing his team mates when he turns into a Giant Titan subdued any attempt to do so. Thus, the team had never use this ability, causing the team great losses and suffering. His team was doomed for failure...\n";
    return 0;
  } 

}
