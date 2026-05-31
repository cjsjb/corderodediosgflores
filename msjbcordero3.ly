\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	composer = "P. Gerardo Javier Flores Cárdenas"
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
}
globalTempo = {
	\tempo 4 = 75
}

\include "msjbcordero3-bajo.def"

\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "msjbcordero3-acordes.inc"
		\new StaffGroup <<
			\include "msjbcordero3-soprano.inc"
			\include "msjbcordero3-mezzo.inc"
			\include "msjbcordero3-tenor.inc"
		>>
		\new StaffGroup <<
			\include "msjbcordero3-violin.inc"
			\include "msjbcordero3-viola.inc"
			\include "msjbcordero3-cello.inc"
		>>
		\include "msjbcordero3-piano.inc"
	>>

	\layout { }
}
