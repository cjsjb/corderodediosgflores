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
\paper {
        #(define line-width (* 7 in))
        print-first-page-number = ##t
        ragged-bottom = ##t
        first-page-number = 1
}
global = { 
    \time 4/4
    \skip 1*26  %% 1-26
}
globalTempo = {
    \tempo 4 = 75  \skip 1*26 
}

\include "msjbcordero3-bajo.def"

\score {
    \new StaffGroup <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0

	\include "msjbcordero3-acordes.inc"
	\include "msjbcordero3-soprano.inc"
	\include "msjbcordero3-piano.inc"
	\include "msjbcordero3-bajo.inc"
	\include "msjbcordero3-violin.inc"
    >> % notes

    \layout { }
} % score
