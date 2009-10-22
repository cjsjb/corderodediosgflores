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
                a,, 1  |
                a,, 1  |
                a,, 2 a,,  |
                b,, 4 a,, g,, 2  |
%% 5
                a,, 4. a,, 8 ~ a,, 2  |
                g,, 4. g,, 8 ~ g,, 2  |
                fis,, 4. fis,, 8 ~ fis,, 2  |
                a,, 1  |
                a,, 2. ~ a,, 8. gis,, 16  |
%% 10
                a,, 2 a,,  |
                b,, 4 a,, g,, 2  |
                a,, 4. a,, 8 ~ a,, 2  |
                g,, 4. g,, 8 ~ g,, 2  |
                fis,, 4. fis,, 8 ~ fis,, 4 fis,,  |
%% 15
                a,, 4. a,, 8 ~ a,, 2  |
                a,, 1  |
                a,, 2 a,,  |
                b,, 4 a,, g,, 2  |
                a,, 4. a,, 8 ~ a,, 2  |
%% 20
                g,, 4. g,, 8 ~ g,, 2  |
                fis,, 4. fis,, 8 ~ fis,, 4 fis,,  |
                f,, 4. f,, 8 ~ f,, 2  |
                f,, 2 r  |
                a,, 4. a,, 8 ~ a,, 2  |
%% 25
                a,, 1  |
                a,, 1  |
                \bar "|."
            } % Voice
        >> % Staff (final)
