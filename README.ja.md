#ビルドの仕方
## 主な流れ
- mrubyプロジェクトの作成
- mrubyのビルド
- RaspberryPiプロジェクトの作成
- RaspberryPiのビルド
- 実行

## mrubyプロジェクトの作成

- 「Window」メニューから「Open Perspective」->「Other...」で「Git Repository Exploring」を選択してOK
- 「Git Repositories」ペインの中の「Clone a Git Repository and add the clone to this view」ボタンを押す
- 「Source Git Repository」画面でURIに「https://github.com/yamanekko/mruby.git」を入力し、Next
- 「Branch Selection」画面でmasterとrubyconfにチェックが入っているのでそのままNext
- 「Local Destination」画面で「Directory」に好きな(存在していない)ディレクトリ名を入力、「Initial branch」を「rubyconf」に変更、そしてFinish
- 「Window」メニューから「Open Perspective」->「Other...」で「C/C++」を選択してOK
- 「File」メニューから「New」->「Makefile Project with Existing Code」を選択
- 「Import Existing Code」画面で「Project Name」に適当なプロジェクト名を入力、「Exising Code Loation」でさっき作ったディレクトリを指定、「Languages」はCとC++にチェックを入れる、Toolchain for Indexer SettingsはCross GCCを選択、Finish

## mrubyのビルド

- プロジェクト直下の「build_config.rb」をエディタで開く
- build_config.rbの「cc.command='/opt/gnuarm/bin/arm-none-eabi-gcc'」のパスを変更（MacPortsのarm-none-eabi-gccを使うなら「cc.command='/opt/local/bin/arm-none-eabi-gcc'」にする）
- 同じくbuild_config.rbの「archiver.command = '/opt/gnuarm/bin/arm-none-eabi-ar'」のパスを変更（MacPortsなら「archiver.command='/opt/local/bin/arm-none-eabi-ar'」にする）
- 「MRuby::CrossBuild.new('STM32F4') do」以下の行はいったん全部削除する
- 「File」メニューの「Save」でbuild_config.rbを保存
- 「Project」メニューの「Build Project」を選択
-- ※なぜかmakeのパスが通っていない場合は「Eclipse」メニューの「環境設定(Preferences)」を選択、「Preferences」画面で「C/C++」→「Build」→「Environment」の「PATH」にmakeのパス(「/usr/bin」とか)を加えておいてから「Build Project」を実行
-- ※rubyもあらかじめインストールしておく
- ビルドされて、「Build Summary」と「Build Finished」が表示されればOK


## RaspberryPiプロジェクトの作成

- 「File」メニューから「Import...」を選択
- 「Select」画面で「Git」の「Project from Git」を選択、Next
- 「Select Repository Source」画面で「Clone URL」を選択、Next
- 「Source Git Repository」画面でURIに「https://github.com/yamanekko/raspberrypi.git」を入力
- 「Branch Selection」画面でmasterにチェックが入っているのでそのままNext
- 「Local Destination」画面で「Directory」に好きなディレクトリ名を入力、「Initial branch」を「master」のまま、そしてNext
- 「Select a wizard to use for importing projects」画面で「Wizard for project import」を「Use the New project wizard  Import as general projects」を選択、Next
- 「Select a wizard」画面で「C/C++」内の「Make Project with Existing Code」を選択、Next
- 「Import Existing Code」画面で「Project Name」に適当なプロジェクト名を入力、「Exising Code Loation」でさっき作ったディレクトリを指定、「Languages」はCとC++にチェックを入れる、Toolchain for Indexer SettingsはCross GCCを選択、Finish

# RaspberryPiのビルド

- プロジェクト直下のMakefileを開く
- 「ARMGNU」と「LIB」の値を適宜変更(MacPortsならそれぞれ「ARMGNU = /opt/local/bin/arm-none-eabi」「LIB = -L /opt/local/arm-none-eabi/lib/fpu/ -L/opt/local/lib/gcc/arm-none-eabi/4.7.2/fpu/」に変更)
- 「INCDIR」と「ULIBDIR」を適宜変更（mrubyプロジェクトとraspberrypiプロジェクトが同じディレクトリ階層にあるなら、「INCDIR = ../【mrubyプロジェクトのディレクトリ名】/include/」「ULIBDIR = ../【mrubyプロジェクトのディレクトリ名】/build/rs/lib」と変更
- 「File」メニューの「Save」でMakefileを保存
- 「Project」メニューの「Build Project」を選択


## 実行
- 「kernel.img」ファイルをSDカードにコピー
- SDカードをRaspberryPiに挿す
- 電源投入






