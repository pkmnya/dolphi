#include "lang_packmenu.h"

const wchar_t* TR(StrId id) {
    static const wchar_t* strings[SID_COUNT][4] = {
        {L"Failed to start packer!", L"启动打包器失败！", L"パッケージャの起動に失敗しました！", L"Не удалось запустить упаковщик!"},
        {L"Out of memory.", L"内存不足。", L"メモリ不足です。", L"Недостаточно памяти."},
        {L"Cannot create collection window.", L"无法创建收集窗口。", L"収集ウィンドウを作成できません。", L"Не удалось создать окно сбора."},
        {L"Dolphi PackMenu Hint", L"Dolphi PackMenu 提示", L"Dolphi PackMenu ヒント", L"Подсказка Dolphi PackMenu"},
        {L"Dolphi Aux Collector (PackMenu)\n\nPrevents context menu process storms.\nDrag & drop items or use the right-click menu.\nAggregates paths instantly for Dolphi packer.", 
           L"Dolphi 辅助收集器 (PackMenu)\n\n作为后台组件防止右键多选引发进程风暴。\n请将文件/文件夹拖入，或从右键菜单调用。\n自动聚合所有路径并移交给Dolphi极速打包。",
           L"Dolphi 補助コレクター(PackMenu)\n\n右クリック多重選択の暴走を防ぎます。\nファイル等をD&Dするか、右クリックで呼び出してください。\nパスを即座に集約しDolphiに渡します。",
           L"Dolphi Aux Collector (PackMenu)\n\nПредотвращает штормы контекстного меню.\nПеретащите файлы/папки или используйте контекстное меню.\nМгновенно собирает пути для упаковщика."},
        {L"Error", L"错误", L"エラー", L"Ошибка"},
        {L"Failed to create temporary list file.", L"创建临时列表文件失败。", L"一時リストファイルの作成に失敗しました。", L"Не удалось создать временный файл списка."},
    };
    return strings[id][(int)g_Lang];
}
