\context Staff = "cello" <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "C."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "bass"
		\key a \major
		r2 r4 a 8 gis  |
		e 2.. cis 8  |
		e 1  |
		a 4 gis b 2  |
%% 5
		fis 1  |
		d 1 ~  |
		d 1  |
		r4 a 8 gis e 4. cis 8  |
		e 2.. cis 8  |
%% 10
		e 1  |
		a 4 gis b 2  |
		fis 1  |
		d 1 ~  |
		d 1  |
%% 15
		r4 a 8 gis e 4. cis 8  |
		e 2.. cis 8  |
		a, 2 gis,  |
		a, 2 b,  |
		fis 1  |
%% 20
		d 1 ~  |
		d 2. d 8 e  |
		f 1  |
		R1  |
		e 1 ~  |
%% 25
		e 1 ~  |
		e 2 r  |
		\bar "|."
	} % Voice
>> % Staff
