# UE-Udemy-Multiplayer1

This project was created in learning purposes with the Gamedev.tv course, accessible via this [link](https://www.udemy.com/course/unrealmultiplayer).

## Part 1

- **UE Client-Server Basics:** Various experiments were conducted with replications, including the utilization of functions like `HasAuthority()`, `SetReplicates()`, and `SetReplicateMovement()`.

- **Trigger Class:** Implemented in both C++ and Blueprints, this class triggers platform movement using functions such as `OnOverlapBegin/End()`. Additionally, the Moving Platform class was utilized, with the `ActivesToTrigger` property and `TArray` to activate it.

- **GameInstance Basics:** Introduced basic concepts related to the `GameInstance` class, along with supplementary YouTube videos covering relevant themes.

- **UFUNCTION(Exec):** Utilized for console commands, facilitating easier testing and debugging.

- **GetWorld()->ServerTravel():** Implemented for server-initiated level transitions, allowing multiplayer navigation between game levels.

- **APlayerController->ClientTravel():** Used for client-initiated level transitions.

Additional material recommended at the end of this part https://cedric-neukirchen.net/docs/intro/
* Great for understanding zone of classes for multiplayer
* after reading RPC and Replication looks completely understandable with minor additional questions that were solved via gpt
* Ownership is not quite clear, but got basic understanding
* Traveling made more questions to research
* Relevancy and Priority & Role and RemoteRole need more attention in case of never saw

The result of this course part [video](https://youtu.be/2qp5I6DiyRc) (2:07).


## Part 2


