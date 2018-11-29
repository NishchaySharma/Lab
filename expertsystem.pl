disease(Patient,tuberculosis):-
						symptom(Patient, persistent_cough),
						symptom(Patient, weight_loss),
						symptom(Patient, fever),
						symptom(Patient, coughing_blood).

disease(Patient,pneumonia):-
						symptom(Patient, cough),
						symptom(Patient, fever),
						symptom(Patient, shaking_chills),
						symptom(Patient, shortness_of_breath).

disease(Patient,byssinosis):-
						symptom(Patient, chest_tightness),
						symptom(Patient, cough),
						symptom(Patient, wheezing).

disease(Patient,pertusis):-
						symptom(Patient, runny_nose),
						symptom(Patient, mild_fever).

disease(Patient,asthma):-
						symptom(Patient, wheezing),
						symptom(Patient, cough),
						symptom(Patient, chest_tightness),
						symptom(Patient, shortness_of_breath).

/*Ask rules*/

symptom(P, Val):-ask('Does the Patient have',Val).

ask(Obj, Val):-known(Obj, Val, true),!.

ask(Obj, Val):-known(Obj, Val, false),!, fail.

ask(Obj, Val):-
	nl,write(Obj),write(' '),
	write( Val) ,
	write('?(y/n)'),
	read(Ans),!,
	((Ans=y, assert(known(Obj, Val, true)));
	(assert(known(Obj, Val, false)),fail)).

diagnose:-
	nl,write('Diagnosing a lung disease..........'),
	nl,disease(symptom,Disease) ,!,nl,
	write('That lung disease could be '), write(Disease).

diagnose:-
	nl, write('Sorry,we may not be able to diagnose the desease!!').

start:-
	repeat, abolish(known/3),dynamic(known/3),
	retractall(known/3), diagnose,nl,nl,
	write('Try again ? (y/n)'),read(Resp),\+ Resp=y,
	nl,write('Bye ! Thanks for using this system'),abolish(known,3) .
