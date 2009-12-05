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
                b, 8 fis < d' b fis' > fis < b d' fis' g, > 8. < fis' d' g, b > ~ < g, b d' fis' > 8  |
%% 5
                < d' a cis' d fis' > 8 < cis' a d d' fis' > 4 < d' d a cis' fis' > 4. fis 8 a  |
                g, 8 d a < g a b d' d g, > ~ < d' b g, d a g > 4 d 8 g  |
                fis, 8 d fis < fis d fis, a d' > ~ < fis a d' d fis, > 4 d 8 fis  |
                a, 8 e a e gis e < gis b > < e a >  |
                a, 8 e a e gis e gis e  |
%% 10
                a, 8 e a e gis e gis e  |
                b, 8 fis < b fis' d' > fis < g, fis' d' b > 8. < g, fis' b d' > ~ < g, fis' d' b > 8  |
                < fis' cis' d' d a > 8 < fis' d' d a cis' > 4 < fis' cis' a d d' > 4. fis 8 a  |
                g, 8 d a < d' b a g g, d > ~ < d' g a d g, b > 4 d 8 g  |
                fis, 8 d fis < d' a fis fis, d > ~ < d' fis, d a fis > 4 d 8 fis  |
%% 15
                a, 8 e a e gis e < gis b > < e a >  |
                a, 8 e a e gis e gis e  |
                a, 8 e a e gis e gis e  |
                b, 8 fis < b fis' d' > fis < g, fis' d' b > 8. < g, fis' b d' > ~ < g, fis' d' b > 8  |
                < fis' cis' d' d a > 8 < fis' d' d a cis' > 4 < fis' cis' a d d' > 4. fis 8 a  |
%% 20
                g, 8 d a < d' b a g g, d > ~ < d' g a d g, b > 4 d 8 g  |
                fis, 8 d fis < d' a fis fis, d > ~ < d' fis, d a fis > 4 d 8 fis  |
                f, 8 a, c f a c' f' a'  |
                < f' a' c'' f > 2 r  |
                a, 8 e a e gis e gis e  |
%% 25
                a, 8 e a e gis e gis e  |
                < a, e a > 1  |
                \bar "|."
            } % Voice
        >> % Staff
