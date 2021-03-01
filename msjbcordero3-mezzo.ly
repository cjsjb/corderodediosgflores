% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	composer = "P. Gerardo Javier Flores Cárdenas"
	title = "Cordero de Dios"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Mezzosoprano"
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
	\skip 1*7  %% 1-7
	%\break
	\skip 1*7  %% 8-14
	%\break
	\skip 1*12  %% 15-26
}
globalTempo = {
	\tempo 4 = 75  \skip 1*26
}
\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "msjbcordero3-acordes.inc"
		\include "msjbcordero3-mezzo.inc"
	>> % notes

	\layout { }
} % score
