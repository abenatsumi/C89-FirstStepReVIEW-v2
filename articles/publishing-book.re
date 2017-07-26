= 書籍を発行する

#@# prh:disable
ついにこの時が来ました。書籍を世に送り出します！
あなたの最高の技術書は完成しましたか？締め切り間際にこのページを開いているのでしょうか。
もし間に合わなくても筆者と本書のことは悪く思わないでください。ベストをつくしましょうね！

本章では書籍を発行する方法を学びます。

 * 印刷所へ入稿する（紙）
 * 電子書籍で発行する（PDF）
 * リフロー型の電子書籍で発行する（EPUB）

紙を印刷する場合は各印刷所でデータのフォーマットや記載内容のルールが異なります。
また電子書籍の場合、紙面とレイアウトが異なっていたり、文字サイズを変更できる（リフロー型とよばれる書籍）メリットがあります。
いずれも見やすさや検索性で一長一短がありますね。TechBoosterでは紙面も電子書籍も両方つくって配っています。

本書のテンプレートレイアウトおよび制作手法で作った技術書は次の印刷所で実績があります
（が入稿を保証するものではありませんのでお気をつけください）。他にも探せば見つかるはずです！

 * 日光企画：@<href>{http://www.nikko-pc.com/}
 * ねこのしっぽ：@<href>{https://www.shippo.co.jp/neko/}

== 入稿のための最終出力を作る

印刷所へ最終的な印刷用データを渡すことを入稿と呼びます。
本節では入稿について実際の事例をベースに解説します。

@<chapref>{writing-book}で述べたとおり、同人誌向けのRe:VIEW構成を使用する前提です。本書のリポジトリをCloneしている場合、ノンブル（通し番号）のような同人誌特有の問題を回避できます。

#@# prh:disable
 * @<href>{https://github.com/TechBooster/C89-FirstStepReVIEW-v2}

ここから先はTechBoosterが日光企画さんへ入稿した場合の手順として解説していきます。実のところ、印刷所ごとに印刷工程が違い、すべてで通用するスタンダードな方法というものはありません。

たとえば表紙データは印刷所ごとテンプレートが異なったり、入稿用本文にトンボ（断裁位置の目印）がないと受け付けてもらえなかったり、利用ソフトウェアのバージョン指定があったり、さまざまです。

かといって、すべてを説明すると流れを理解するまえに頭がパンクしてしまいます。ですので日光企画さんの事例に限って入稿に必要な知識をみていきましょう。実際には入稿予定の印刷所が指定するフォーマット、注意点を熟読して入稿に挑みましょう。

入稿に先立って知っておく知識として、部数に応じて適した印刷手法が異なります。

: オンデマンド印刷
  ～200部の小ロット印刷。印刷に使う版を作らないので手軽ですが単価は高めです

: オフセット印刷
  200部〜の印刷に利用。版を作る手法で、ロット数に応じて単価が安くなります

一般的にオフセット印刷のほうが品質がよいですが、近年の印刷技術向上によりオンデマンド印刷でも十分な品質を得られるケースがあります。
とくに品質については印刷所の腕の見せ所といえます。紙の種類も多数あるため詳細を知りたい場合は印刷所に相談するとよいでしょう。
だれもが最初から熟練者ではありません。はじめての人の相談にも快く応じてくれるでしょう。

TechBoosterが過去に遭遇した事例では次のとおりです（印刷所選びに不安があれば本書のリポジトリ＋日光企画さんを使うとトラブルなく入稿できる可能性が高くなります）。

 * 表紙データ：表紙は本文と別の形式で入稿する
 * ページ数：紙の消費単位の関係で4の公倍数とするなど制約がある
 * ノンブル：全ページ通し番号が必要
 * レイアウト：余裕を持った小口（余白）を設定する
 * 奥付：印刷所表記を行う

技術書であれば表紙がカラー、本文がモノクロであるケースがほとんどです。表紙と本文については後述の節でフォローしていきます。

一番の悩みどころである印刷部数については売れて欲しい部数の８掛けぐらいちょうどいいでしょう。
鉄則は頒布する必要最低限だけ印刷して在庫を持たないことです。８掛けであれば予測を外しても大量には残らない数です。

同人誌においては新刊がもっとも売れます。残った在庫は既刊と呼ばれ、
新刊ほどの勢いはありません。おおよそ２０％程度の販売速度になります。

サークルごとに部数の指標は違いますが、TechBoosterは１５００～２０００部を用意してます。
日光企画さんの場合はオンデマンド印刷、オフセット印刷どちらでもPDF入稿が可能です。
つまり本書で紹介している手法で出力したらそのまま入稿形式となり、完璧！というわけです。便利ですね。

== 表紙データの作成方法

印刷所ごとのフォーマットに合わせて表紙を作成します。フォーマットはPhotoshopのPSD形式です。
イラストと表紙用の装丁をおこない、入稿用データを作成します（@<img>{hyoushi}）。

//image[hyoushi][入稿データの一例]{
//}

表紙 1（表）と表紙 4（裏）に本の厚みも考慮した背を足したサイズが必要です。
断ち切りのための遊びがどれぐらい必要か、なども印刷所に確認しておきます。

日光企画さんの標準的なセットでは背は0.063mm/ページで計算します。背幅は表紙も含めたページ数なので本文128ページであれば表紙をいれると132ページ（8.316mm）です。

ちなみに表紙は表紙１〜表紙４と呼び、ページ数に含めます。本の内側に来る表紙２、表紙３には通常印刷しません。

TechBoosterではデザイナーさんとイラストレーターさんが協力して表紙を作成しています。
編集者が双方に書籍のイメージを伝えて構図を固めていきます。書籍の魅力を最大限引き出す表紙にしましょう。手に取ってもらえなければ読んでもらえないのですから。

印刷所によってはAI形式でも大丈夫だったり、利用できるソフトウェアのバージョン指定があったりします。表紙のフォーマット（テンプレート）もかならず違うのでよく確認してからとりかかりましょう。

== 本文データの作成方法

本文データはPDF形式で入稿します。またAdobe Acrobat Proが必要@<fn>{adobe}です。

//footnote[adobe][表紙データの作成にもPhotoshopを使うので潔くCreative Cloudのコンプリート月々プランでの契約がオススメです]

ページ数は基本的に４の倍数になるように揃えて入稿します。ならない場合は無理やり白いページを挟むこともあります。
またページごとにノンブル（ページの通し番号）が必要です。たとえ白であっても、番号をいれます。
同人誌以外では見ない制約ですが、乱丁を防ぐためにつけています。レイアウトは指がかかるのと本のノド（綴じている側の余白）があるので余裕を持った設定をしています。
読みやすさに直結するので注意して設定してください。最初のうちは@<b>{本書リポジトリのレイアウト設定}での利用を推奨します。

ここでも印刷所によっては、PDF形式での入稿が行えない（画像として出力する必要がある）、トンボが必要である、隠しノンブルに対応できる、など条件が異なります。

TechBoosterが日光企画さんに入稿する事例では次のように進めています。

次のコマンドでPDFを出力します（B5 JISサイズを指定しています）。

//cmd{
review-pdfmaker config.yml
//}

しかし、これだけでは入稿に使えません。
フォントの埋め込みとPDFのフォーマットをPDF/Xに変換、原稿のモノクロ化をしてはじめて印刷所で扱うことができます。

=== フォントの確認
MacTexを利用している場合、現在のフォントを次のコマンドで調べることができます。

//cmd{
$ kanji-config-updmap status

CURRENT family for ja: ipaex
Standby family : ipa
//}

MacTex 2017ではデフォルトでIPAフォントを利用しています。埋め込まれていない場合は@<tt>{noEmbed}と表示しているはずです。
後述の手法をつかうとヒラギノフォントなどデフォルト以外に変更できます。

=== フォントの埋め込み

フォントの埋め込みをおこない、フォントがない環境で文字化けが起きないようにします。
埋め込み方は「Tex Wiki」サイト@<fn>{mactex-font}が参考になります。次のコマンドはサイトからの引用です。

//cmd{
cd /usr/local/texlive/2017/texmf-dist/scripts/cjk-gs-integrate
sudo perl cjk-gs-integrate.pl --link-texmf --force
sudo mktexlsr
//}

//cmd{
sudo kanji-config-updmap-sys hiragino-elcapitan
//}

//footnote[mactex-font][@<href>{https://texwiki.texjp.org/?TeX%20Live%2FMac#elcapitan}]

このコマンドを実行したあとに@<tt>{review-pdfmaker}コマンドでPDFを作成するとフォントが埋め込まれています。文書のプロパティで埋め込みフォントと表示があれば成功です（@<img>{font}）。

//image[font][埋め込みフォント][scale=0.75]{
//}

=== PDFフォーマットをPDF/Xに変換

PDFと一口にいっても単純じゃありません。そこは長い歴史をもつPDFさんのことです。
多数のバージョンが存在しています。TeXに続く深淵です。

しかし、印刷所への入稿を考えるとPDF/Xフォーマットがもっともポピュラーです。残念ながらLaTeX単体では対応できないため、ここから先はAcrobat Pro DCでの操作です。

ツールから印刷工程を選ぶと次のサイドメニューが表示されます（@<img>{pdfx}）。

//image[pdfx][PDF/Xとして保存する（画面右サイドメニュー中）]{
//}

メニューの中のPDF/Xとして保存するを選んで、別名で保存してください。このとき目次のハイパーリンクなど付加情報は保存されませんが、これは仕様@<fn>{engineer}です。

//footnote[engineer][エンジニアは仕様といわれると弱い]

=== 原稿のモノクロ化

入稿の最終段階です。作成したPDFデータをモノクロ化します。モノクロ化にあたってはPDF/Xフォーマットであることが前提ですので、前述のフォーマット変換作業を忘れずにおこなってください。

ツールから印刷工程を選ぶと色を置換というサイドメニューが表示されています（前述の@<img>{pdfx}のPDF/Xとしての保存の２つ上です）。

ここではオブジェクトのうち、DeviceCMYKカラータイプのプロファイルを変換します（@<img>{replace-color}、@<img>{replace-color-dot-gain}）。

//image[replace-color][色を置換では、DeviceCMYKを選択する]{
//}

//image[replace-color-dot-gain][カラーを出力インテントに変換をチェック]{
//}

@<b>{カラーを出力インテントに変換}にチェックをいれて、@<b>{Dot Gain 15%}を選択します。
また変換のオプションで@<b>{黒を維持}もチェックします。

この設定で色を置換すると無事、モノクロ化できます。ここまでで本文の入稿データ作成は完了です。

== 電子書籍（PDF）を発行する

紙版と電子書籍、おなじPDFなのに何が違うんだと感じるでしょう。指摘はもっともです。論より証拠、比較画像を用意しました（@<img>{ebook}）。

//image[ebook][紙面レイアウト（左）と電子書籍用レイアウト(右)]{

//}

大きな違いはフォントと余白です。紙面ではのりで本を綴じるため、手で持って読むために余白を広く取ってあります。
一方の電子書籍用フォーマットでは余白は最小限に、PCやスマートフォンで読みやすいようにフォントも変えています。
小さな違いにみえるかもしれませんが、快適に読むための工夫がたっぷり含まれています。

カラーで読める点、URLがリンクになる点なども電子書籍のメリットです。

電子書籍用レイアウトの適用は少々手がかかります。手順を追って説明しましょう。

 1. @<tt>{config.yml}の変更
 2. レイアウトファイルの差し替え
 3. @<code>{review-pdfmaker}でPDF出力する

まず@<tt>{config.yml}を紙面レイアウトから電子書籍向けレイアウトに変更します（@<list>{config_ebook}）。

//list[config_ebook][電子書籍用レイアウトに変更する]{
# 表紙に配置し、書籍の影絵にも利用する画像ファイル。
coverimage: cover.jpg
# LaTeX用のスタイルファイル(styディレクトリ以下に置くこと)
# texstyle: reviewmacro
# tatsumacroは、電子書籍版の制作に利用する
texstyle: tatsumacro
# texstyle: techbooster-doujin

# LaTeX用のdocumentclassを指定する
# tatsumacro利用の場合はこちら
texdocumentclass: ["jsbook", "oneside,14pt,uplatex"]
# TechBoosterの指定は次の通り
# texdocumentclass: ["jsbook", "b5j,twoside,openany,uplatex"]
//}

@<code>{texstyle}および@<code>{texdocumentclass}をサンプルのとおり変更します。
表紙がある場合は@<code>{coverimage}に設定します。

次にレイアウトファイルの差し替えです。
TechBoosterのテンプレートは、Re:VIEW標準のレイアウトを拡張しています。
手際がよいとはいえませんが電子書籍用レイアウトでビルドするときは一時的に退避しておきます。

//cmd{
mv layouts/layout.tex.erb layouts/layout.tex.erb.bak
//}

最後に@<code>{review-pdfmaker}でビルドします。

//cmd{
review-pdfmaker config.yml
//}

成功したら@<tt>{bookname.pdf}ファイルが得られます。念のため、フォントが埋め込まれているか確認しておいてください。
フォントが埋め込まれていない場合は、表示時に代替フォントが利用されます。読む端末に依存するため文字化けのリスクが格段に高くなります。

なおTechBoosterでは電子書籍用レイアウトと紙面レイアウトが同じ横幅（つまり1行の文字数が一緒）になるように調整しています。
電子書籍用レイアウトのPDFを作ってもソースコードの折り返しを気にしなくていいので評判@<fn>{good}です。
すべてメンテナンスフリーであればいいのですが、表や本文中のURLなどで折り返しが上手くいかないケースもよく遭遇します。品位を上げるためにはPDFを確認しながらの微調整が必要です。

//footnote[good][著者＝発行者なので自画自賛していることになるが気にしない]

== EPUB（リフロー）を発行する

EPUBは電子書籍ファイルフォーマット規格のひとつです。多くのEPUBリーダーが普及しています（@<img>{epub_reader}）。

//image[epub_reader][EPUBリーダーのiBooks][scale=0.75]{

//}

紙やPDFの書籍と異なり、フォントサイズを自由に変更できる利点があります。
Re:VIEWはEPUB3フォーマットで出力可能です。

レイアウトはリーディング環境（EPUBリーダー）に合わせて変化するためページの概念がありません。
またフォントサイズが可変な特性上、ソースコードの折り返しが制御できない点は覚えておいてください。

技術書の内容でEPUBが向くものと向かないものはっきりと別れる傾向があります。

EPUBでも表紙をつけることができます。@<tt>{config.yml}の設定を抜粋します（@<list>{epub_config}）。

//list[epub_config][config.yml - EPUBの設定（抜粋）]{
  epubmaker:
    # HTMLファイルの拡張子
    htmlext: xhtml
    # 表紙に配置し、書籍の影絵にも利用する画像ファイル。
    coverimage: cover.jpg
//}

@<code>{cover.jpg}は@<tt>{config.yml}の位置をルートに@<tt>{image/cover.jpg}へ配置してください。
カバー画像がない場合は署名が表示されます。

ビルドするためのコマンドは次のとおりです。

//cmd{
review-epubmaker config.yml
//}

成功したら@<tt>{bookname.epub}ファイルを出力します。早速、出力されたEPUBをiBooksで表示してみましょう（@<img>{epub}）。

//image[epub][iBooksでの表示例]{

//}

EPUBリーダーで柔軟にレイアウトし、読者の環境に合わせて読める特徴は他のフォーマットにない利点です。


#@# TODO mhidaka
