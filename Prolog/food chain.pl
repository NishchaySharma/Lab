just_ate('mosquito','blood').
just_ate('frog','mosquito').
just_ate('crow','frog').
is_digesting(X,Y):-
    just_ate(X,Y).
is_digesting(X,Y):-
    just_ate(X,Z),
    is_digesting(Z,Y).
