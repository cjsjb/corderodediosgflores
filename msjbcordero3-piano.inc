        \context Staff = "piano" << 
            \set Staff.instrumentName = "Piano"
            \set Staff.shortInstrumentName = "P."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "piano" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble_8"
                \key a \major
                a, 8 e a e gis e gis e  |
                a, 8 e a e gis e gis e  |
                a, 8 e a e gis e gis e  |
                b, 8 d < fis a > d g, b, < fis b d > 4  |
%% 5
                < fis a cis' d > 8 < cis' a > 4 \stemUp < fis d a cis' > 4. \stemNeutral fis 8 a  |
                g, 8 b, d g ~ g 2  |
                fis, 8 a, d fis ~ fis 2  |
                a, 8 e a e gis e < gis b > < e a >  |
                a, 8 e a e gis e gis e  |
%% 10
                a, 8 e a e gis e gis e  |
                b, 8 d < fis a > d g, b, < b d fis > 4  |
                < cis' a fis d > 8 < cis' a > 4 \stemUp < cis' a d fis > 4. \stemNeutral fis 8 a  |
                g, 8 b, d g ~ g 2  |
                fis, 8 a, d fis ~ fis 2  |
%% 15
                a, 8 e a e gis e < gis b > < e a >  |
                a, 8 e a e gis e gis e  |
                a, 8 e a e gis e gis e  |
                b, 8 d < fis a > d g, b, < b d fis > 4  |
                < cis' a fis d > 8 < cis' a > 4 \stemUp < cis' a d fis > 4. \stemNeutral fis 8 a  |
%% 20
                g, 8 b, d g ~ g 2  |
                fis, 8 a, d fis ~ fis 2  |
                f, 8 a, c f < a f > 2  |
                R1  |
                a, 8 e a e gis e gis e  |
%% 25
                a, 8 e a e gis e gis e  |
                a, 1  |
                \bar "|."
            } % Voice
        >> % Staff
