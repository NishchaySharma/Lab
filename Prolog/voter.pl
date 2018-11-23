/* A person with age>=18 can vote
 *  otherwise he/she can't vote.
 */
person('Aman',19).
person('Shayam',20).
person('Harshit',16).
person('Renu',18).
person('Mitali',15).
person('Manju',50).
vote(X):-person(X,Age),Age>=18.
