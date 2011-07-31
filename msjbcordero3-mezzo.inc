\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \major
		R1  |
		r2 r4 r8 cis'  |
		cis' 8 cis' 4 cis' 8 b 4 r8 b  |
		fis' 8 fis' e' cis' fis' 8. e' fis' 8  |
%% 5
		e' 8 cis' ~ cis' 2 r4  |
		b 4 d' 8 g' 4. r4  |
		a 4 d' 8 fis' 4 r8 e' cis'  |
		d' 4. ( e' 8 ) e' 2  |
		r2 r4 r8 cis'  |
%% 10
		cis' 8 cis' 4 cis' 8 b 4 r8 b  |
		fis' 8 fis' e' cis' fis' 8. e' fis' 8  |
		e' 8 cis' ~ cis' 2 r4  |
		b 4 d' 8 g' 4. r4  |
		a 4 d' 8 fis' 4 r8 e' cis'  |
%% 15
		d' 4. ( e' 8 ) e' 2  |
		r2 r4 r8 cis'  |
		cis' 8 cis' 4 cis' 8 b 4 r8 b  |
		fis' 8 fis' e' cis' fis' 8. e' fis' 8  |
		e' 8 cis' ~ cis' 2 r4  |
%% 20
		b 8 b d' g' 4. r4  |
		a 8 a d' fis' 4. r4  |
		a 4 ( d' ) f' 2  |
		r2 r4 e' 8 ( cis' )  |
		d' 8 ( e' ~ e' 2. )  |
%% 25
		R1*2  |
		\bar "|."
	} % Voice

	\lyricsto "voz-mezzosoprano" \new Lyrics \lyricmode {
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
