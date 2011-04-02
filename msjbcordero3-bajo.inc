        \context Staff = "bajo" << 
            \set Staff.instrumentName = "Bajo"
            \set Staff.shortInstrumentName = "B."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "bajo" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "bass_8"
                \key a \major

				\bajo

                \bar "|."
            } % Voice
        >> % Staff (final)

		\context TabStaff = "tabbajo" <<
			\set TabStaff.stringTunings = #'(-17 -22 -27 -32)
			\override Stem #'transparent = ##t
			\override Stem #'length = #0
			\override Beam #'transparent = ##t
			\set autoBeaming = ##f
			\override Staff.Rest #'break-visibility = #all-invisible

			\bajo
		>>
