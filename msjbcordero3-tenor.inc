\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key a \major
		R1  |
		r2 r4 r8 a  |
		a 8 e 4 cis 8 e 4 r8 e  |
		d' 8 d' cis' a d' 8. cis' d' 8  |
%% 5
		cis' 8 a ~ a 2 r4  |
		g 4 b 8 d' 4. r4  |
		fis 4 a 8 d' 4 r8 cis' a  |
		b 4. ( cis' 8 ) cis' 2  |
		r2 r4 r8 a  |
%% 10
		a 8 e 4 cis 8 e 4 r8 e  |
		d' 8 d' cis' a d' 8. cis' d' 8  |
		cis' 8 a ~ a 2 r4  |
		g 4 b 8 d' 4. r4  |
		fis 4 a 8 d' 4 r8 cis' a  |
%% 15
		b 4. ( cis' 8 ) cis' 2  |
		r2 r4 r8 a  |
		a 8 e 4 cis 8 e 4 r8 e  |
		d' 8 d' cis' a d' 8. cis' d' 8  |
		cis' 8 a ~ a 2 r4  |
%% 20
		g 8 g b d' 4. r4  |
		fis 8 fis a d' 4. r4  |
		f 4 ( a ) d' 2  |
		r2 r4 cis' 8 ( a )  |
		b 8 ( cis' ~ cis' 2. )  |
%% 25
		R1*2  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-tenor" {
		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad," "ten" "pie" -- "dad" "de" "no" -- "so" __ "tros."

		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad," "ten" "pie" -- "dad" "de" "no" -- "so" __ "tros."

		"Cor" -- "de" "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"da" -- "nos" "la" "paz," "da" -- "nos" "la" "paz," "da" __ "nos" "la" __ "paz." __
	 } % Lyrics


>> % Staff
