# Pangaea パーツリスト

標準構成での組み立てに必要な部品の一覧です。
親指プレートのキー数を減らす場合はその分のキースイッチ、ソケット、ダイオードが減少します。例えば標準の5キー構成から3キー構成に変更すると、左右でマイナス2ずつでで必要パーツ数は58-2\*2=54となります。
数字行を無くす場合は、左右でマイナス6ずつで、必要パーツ数は58-6\*2=46となります。

- ダイオード(スルーホールまたはchip部品) (4x4 + 4x2 + 1x5) x 2 = 58
  - 1N4148
    - <https://akizukidenshi.com/catalog/g/gI-00743/>
  - SMD
    - <https://shop.yushakobo.jp/products/a0800di-02-100>

- スイッチソケット (MXまたは choc 用) 29 x 2 = 58
  - Kailh Hot-Swappable PCB Socket
    - <https://shop.yushakobo.jp/products/a01ps>
    - <https://talpkeyboard.net/items/5e02c5405b120c792616bcf9>

- スイッチ  (MXまたは choc 用) 29 x 2 = 58
  - Cherry MX 互換スイッチ、5pin が安定です。お好きなモノで
  - choc スイッチ
    - Google it.

- Controller
  - Pro Micoro x 2
  - <https://www.switch-science.com/catalog/6228/>
  - 現在の対応マイコンは Pro Micro ですが、今後、Raspbery Pi PicoやRP2040シリーズへの対応も検討されています。

- コンスルーピンヘッダ x 2
  - <https://shop.yushakobo.jp/products/31>
  - <https://talpkeyboard.stores.jp/items/5e056626d790db16e2889233>

- Reset switch x 2
  - タクトスイッチ
  - <https://akizukidenshi.com/catalog/g/gP-08074/>

- 3.5mm TRRS ケーブル x 1
  - Google it.

- USB ケーブル x 1
  - Google it.

- M2 スタンドオフ (9mm, XHコネクタを利用しない直接接続では4mm-5mm(未検証)
  - ARB-2009E
  - <https://www.hirosugi-net.co.jp/shop/g/g2396/>

- M2 ネジ
  - 長さ 6mm (5mmはちょっと不足ですが使えないことはないです) (16+18)x2
  - F-0206-E, 6mm
  - <https://www.hirosugi-net.co.jp/shop/g/g36907/>
  - 見える部分には低背のこちらが見かけがよいです。また背面にも高さが出ないでないためおすすめです。しかしながら、v1.0では8mmを使うと干渉するため、5mmでがんばって使えばすべてこのネジでも大丈夫です。コネクタ部分に使う長さのおすすめはワッシャ、スプリングワッシャを考慮すると6mmです。5mmでは長さが不足します。ワッシャだけ、あるいはスプリングワッシャだけなら5mmで大丈夫ですが効果が薄れます。
    - FX-0250EB 5mm 鉄(三価クロメート黒色) ＋低頭精密小ねじ
    - <https://wilco.jp/products/F/FX-EB.html#page3>

- M2 ナット (コネクタ部品用 4x2)
  - BNT-02
  - <https://www.hirosugi-net.co.jp/shop/g/g37954/>

- ゴム足
  - ダイソー クッションゴム 14個入り など

note alert
v1.0では MXスイッチ利用時はコネクタ部のナットとPCBが干渉するため少し高めの9mmのスタンドオフ長となっています。

以下オプションです

- ワッシャ
  - 使用するとスムーズに可動部分が動きます
  - スプリングワッシャと組み合わせて使うと緩みがなく、かつ可動部分を動かしやすくなります。
  - Google it.

- スプリングワッシャ
  - 使用するとネジが緩みにくくなるため強くおすすめです
  - Google it.

- XH 6ピンケーブル付コネクタ
  - 使うと高さは出ますが配線や分解が楽です
  - 長さ15cm−20cm程度のものが販売されています。もちろん自分でワイヤに端子を固定してケーブル自作もできますが時間もかかりますし専用の工具も必要になります。
  - Google it.
