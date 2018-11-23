factorial(0,1).
factorial(X,Y):-
    X>0,
    New is X-1,
    factorial(New,New2),
    Y is X*New2,!.
