        \context Staff = "voz" << 
            \set Staff.instrumentName = "Voz"
            \set Staff.shortInstrumentName = "V."
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "voz" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \key a \major
                R1  |
                r2 r4 r8 a'  |
                a' 8 e' 4 cis' 8 e' 4 r8 e'  |
                d'' 8 d'' cis'' a' d'' 8. cis'' d'' 8  |
%% 5
                cis'' 8 a' 2 r8 r4  |
                g' 4 b' 8 d'' ~ d'' 4 r  |
                fis' 4 a' 8 d'' ~ d'' 4 cis'' 8 a'  |
                b' 4. ^( cis'' 8 ) cis'' 2  |
                r2 r4 r8 a'  |
%% 10
                a' 8 e' 4 cis' 8 e' 4 r8 e'  |
                d'' 8 d'' cis'' a' d'' 8. cis'' d'' 8  |
                cis'' 8 a' 2 r8 r4  |
                g' 4 b' 8 d'' ~ d'' 4 r  |
                fis' 4 a' 8 d'' ~ d'' 4 cis'' 8 a'  |
%% 15
                b' 4. ^( cis'' 8 ) cis'' 2  |
                r2 r4 r8 a'  |
                a' 8 e' 4 cis' 8 e' 4 r8 e'  |
                d'' 8 d'' cis'' a' d'' 8. cis'' d'' 8  |
                cis'' 8 a' 2 r8 r4  |
%% 20
                g' 8 g' b' d'' ~ d'' 4 r  |
                fis' 8 fis' a' d'' ~ d'' 4 r  |
                f' 4 _( a' ) d'' 2  |
                r2 r4 cis'' 8 _( a' )  |
                b' 8 ^( cis'' 2 ) r8 r4  |
%% 25
                R1*2  |
                \bar "|."
            } % Voice

            \lyricsto "voz" \new Lyrics \lyricmode {
                 "Cor" "de" "ro" "de" "Dios," "que" "qui" "tas" "el" "pe" "ca" "do" "del" "mun" "do," "ten" "pie" "dad," "ten" "pie" "dad" "de" "no" "so" "tros." "Cor" "de" "ro" "de" "Dios," "que" "qui" "tas" "el" "pe" "ca" "do" "del" "mun" "do," "ten" "pie" "dad," "ten" "pie" "dad" "de" "no" "so" "tros." "Cor" "de" "ro" "de" "Dios," "que" "qui" "tas" "el" "pe" "ca" "do" "del" "mun" "do," "da" "nos" "la" "paz," "da" "nos" "la" "paz," "da" "nos" "la" "paz." 
             } % Lyrics


        >> % Staff

