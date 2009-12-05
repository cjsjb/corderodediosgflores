% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\paper {
	between-system-padding = #0.7
}
\header {
    composer = "Gerardo J. Flores/Virgilio Cantú"
    title = "Cordero de Dios"
    tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
global = { 
    \time 4/4
    \skip 1*26  %% 1-26
}
globalTempo = {
    \tempo 4 = 75  \skip 1*26 
}
\score {
    \new StaffGroup <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0
	\override Score.MetronomeMark #'padding = #8.0

	\include "msjbcordero3-acordes.inc"
	\include "msjbcordero3-voz.inc"
	\include "msjbcordero3-flauta.inc"
    >> % notes

    \layout { }
} % score
