\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	composer = "P. Gerardo Javier Flores Cárdenas"
	title = "Cordero de Dios"
	tagline = "Coro Juvenil San Juan Bosco"
	instrument = "Violín"
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
}
globalTempo = {
	\tempo 4 = 75
}
\score {
	\new StaffGroup <<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0
		\override Score.MetronomeMark #'padding = #8.0

		\include "msjbcordero3-acordes.inc"
		\include "msjbcordero3-violin.inc"
	>>

	\layout { }
}
