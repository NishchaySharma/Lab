/* Sibling relationship
 * for the Weasley Family Tree.
*/
father('Aurther','Ron').
father('Aurther','Ginevra').
father('Ron','Rose').
father('Ron','Hugo').
father('Harry','James Jnr').
father('Harry','Albus Jnr').
father('Harry','Lily Jnr').
mother('Molly','Ron').
mother('Molly','Ginevra').
mother('Hermione','Rose').
mother('Hermione','Hugo').
mother('Ginevra','James Jnr').
mother('Ginevra','Albus Jnr').
mother('Ginevra','Lily Jnr').
sibling(X,Y):-
    father(Z,Y),
    father(Z,X),
    mother(K,Y),
    mother(K,X),
    X\=Y;!.



