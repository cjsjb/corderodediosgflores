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

		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
		b, 8 \sustainOn fis < d' b fis' > fis \sustainOff < b d' fis' g, > 8. \sustainOn < fis' d' g, b > _~ < g, b d' fis' > 8 \sustainOff  |
%% 5
		< d' a cis' d fis' > 8 \sustainOn < cis' a d d' fis' > 4 \stemUp < d' d a cis' fis' > 4. \stemNeutral fis 8 a \sustainOff  |
		g, 8 \sustainOn d g < d g, g a b d' > 4. d 8 g \sustainOff  |
		fis, 8 \sustainOn d fis < d fis, fis a d' > 4. d 8 fis \sustainOff  |
		a, 8 \sustainOn e a e gis e < gis b > a \sustainOff  |
		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
%% 10
		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
		b, 8 \sustainOn fis < b fis' d' > fis \sustainOff < g, fis' d' b > 8. \sustainOn < g, fis' b d' > _~ < g, fis' d' b > 8 \sustainOff  |
		< fis' cis' d' d a > 8 \sustainOn < fis' d' d a cis' > 4 < fis' cis' a d d' > 4. fis 8 a \sustainOff  |
		g, 8 \sustainOn d g < g, d a g d' b > 4. d 8 g \sustainOff  |
		fis, 8 \sustainOn d fis < fis, d a fis d' > 4. d 8 fis \sustainOff  |
%% 15
		a, 8 \sustainOn e a e gis e < gis b > a \sustainOff  |
		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
		b, 8 \sustainOn fis < b fis' d' > fis \sustainOff < g, fis' d' b > 8. \sustainOn < g, fis' b d' > _~ < g, fis' d' b > 8 \sustainOff  |
		< fis' cis' d' d a > 8 \sustainOn < fis' d' d a cis' > 4 < fis' cis' a d d' > 4. fis 8 a \sustainOff  |
%% 20
		g, 8 \sustainOn d g < g, d a g d' b > 4. d 8 g \sustainOff  |
		fis, 8 \sustainOn d fis < fis, d a fis d' > 4. d 8 fis \sustainOff  |
		f, 8 \sustainOn a, c f a c' f' a'  |
		< f' a' c'' f a c' > 2 r \sustainOff  |
		a, 8 \sustainOn e a e gis e gis e \sustainOff  |
%% 25
		a, 8 \sustainOn e a e gis e gis e  |
		< a, e a > 1 \sustainOff  |
		\bar "|."
	} % Voice
>> % Staff
