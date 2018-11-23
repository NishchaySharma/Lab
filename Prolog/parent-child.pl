/* Parent relationship for Potter
 * family tree.
 * X is the child of A and B
 * Where A is Father and B is Mother
 */
father('James','Harry').
father('Harry','James Jnr').
father('Harry','Albus').
father('Harry','Lily Jnr').
mother('Lily','Harry').
mother('Ginevra','James Jnr').
mother('Ginevra','Albus').
mother('Ginevra','Lily Jnr').
child(X,A,B):-
    father(A,X),
    mother(B,X);
    !.



