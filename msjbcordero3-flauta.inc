        \context Staff = "track 4" << 
            \set Staff.instrumentName = "Flauta"
            \set Staff.shortInstrumentName = "F."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voice 4" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key a \major
                R1*2  |
                a' 2 gis'  |
                d'' 4 cis'' \times 2/3 { a' fis' a' }  |
%% 5
                cis'' 1  |
                g' 1  |
                fis' 1  |
                R1*2  |
%% 10
                a' 2 gis'  |
                d'' 4 cis'' \times 2/3 { a' fis' a' }  |
                cis'' 1  |
                g' 1  |
                fis' 1  |
%% 15
                R1*2  |
                a' 2 gis'  |
                d'' 4 cis'' b' 2  |
                e'' 4 d'' cis'' 2  |
%% 20
                d'' 4 d'' b' 2  |
                fis'' 1  |
                f'' 1  |
                a' 2 gis'  |
                a' 2 gis'  |
%% 25
                a' 1 ~  |
                a' 2 r  |
                \bar "|."
            } % Voice
        >> % Staff
