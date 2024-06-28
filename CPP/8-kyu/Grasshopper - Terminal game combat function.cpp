/*
    Create a combat function that takes the player's current health and the amount of damage recieved, and returns the player's new health. Health can't be less than 0.


*/

int combat(int health, int damage){
  if(health < damage) {
    return 0;
  }
  else{
    return health - damage;
  }

}