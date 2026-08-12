#include "lang_uninstall.h"

const wchar_t* TR(StrId id) {
    static const wchar_t* strings[SID_COUNT][4] = {
        {L"Dolphi Uninstall - %s", L"Dolphi — 卸载 %s", L"Dolphi 削除 — %s", L"Dolphi Удал. — %s"},
        {L"Dolphi Built-in Uninstaller", L"Dolphi 内置卸载程序", L"Dolphi 内蔵削除ツール", L"Встр. деинсталлятор Dolphi"},
        {L"Disable Built-in Uninstaller", L"不使用内置卸载器", L"組み込みアンインストーラを使用しない", L"Откл. встр. деинсталлятор"},
        {L"Uninstaller Path:", L"卸载程序路径:", L"削除ツールパス:", L"Путь к деинсталлятору:"},
        {L"Uninstall Registry Script (optional):", L"卸载时清理的注册表 (可选):", L"削除時レジストリ (任意):", L"Скрипт реестра при удалении (опц.):"},
        {L"Uninstalling: %s", L"正在卸载: %s", L"削除中: %s", L"Удаление: %s"},
        {L"Confirm uninstall %s?\n\nLocation:\n%s", L"确认卸载 %s?\n\n卸载位置:\n%s", L"%s を削除しますか？\n\n場所:\n%s", L"Удалить %s?\n\nПуть:\n%s"},
        {L"%s uninstalled", L"%s 卸载完成", L"%s の削除が完了しました", L"%s удален"},
        {L"Uninstall in progress, please wait.", L"卸载进行中，请等待完成。", L"アンインストール中、完了までお待ちください。", L"Идет удаление, подождите."},
        {L"Uninstall failed, code: %u", L"卸载失败，错误码: %u", L"アンインストール失敗、エラーコード: %u", L"Ошибка удал., код: %u"},
        {L"Uninstaller is already running.", L"卸载程序正在运行。", L"削除ツールは既に実行中です。", L"Деинсталлятор уже запущен."},
        {L"Dolphi Uninstaller", L"Dolphi 卸载程序", L"Dolphi 削除ツール", L"Деинсталлятор Dolphi"},
        {L"Error", L"错误", L"エラー", L"Ошибка"},
        {L"Info", L"提示", L"情報", L"Информация"},
        {L"Confirm Cancel", L"取消确认", L"キャンセルの確認", L"Подтверждение отмены"},
        {L"Warning", L"警告", L"警告", L"Предупреждение"},
        {L"File in use by:\n%s\n\nForce close and retry?\n(Tip: otherwise uninstall may be incomplete)", L"文件正被占用：\n%s\n\n是否强制关闭并重试？\n(提示：如果不关闭，可能会导致卸载不完整)", L"以下のプロセスが使用中:\n%s\n\n強制終了して再試行しますか？\n(終了しないとアンインストールが不完全になる場合があります)", L"Файл используется:\n%s\n\nПринудительно закрыть и повторить?\n(Иначе удаление может быть неполным)"},
        {L"Cannot read uninstall manifest:\n%s\n\nThis file may have been deleted or the installation is incomplete.\nCannot continue uninstall.", L"无法读取卸载清单：\n%s\n\n该文件可能已被删除或程序安装不完整。\n无法继续卸载。", L"削除設定を読めません:\n%s\n\nこのファイルは削除されたか、インストールが不完全な可能性があります。\nアンインストールを続行できません。", L"Не удалось прочесть манифест:\n%s\n\nЭтот файл мог быть удален или установка не завершена.\nНевозможно продолжить удаление."},
        {L"Uninstall manifest format error", L"卸载清单格式错误", L"削除設定の形式エラー", L"Ошибка формата манифеста"},
        {L"Executing registry cleanup...", L"执行注册表清理...", L"レジストリクリーンアップを実行中...", L"Выполнение очистки реестра..."},
        {L"Starting to delete files...", L"开始删除文件...", L"ファイルの削除を開始しています...", L"Начало удаления файлов..."},
        {L"Deleted: %s", L"删除: %s", L"削除: %s", L"Удалено: %s"},
        {L"Skipped: %s", L"跳过: %s", L"スキップ: %s", L"Пропущено: %s"},
        {L"Deleting desktop shortcut...", L"删除桌面快捷方式...", L"デスクトップショートカットを削除中...", L"Удаление ярлыка на рабочем столе..."},
        {L"Deleting empty directories...", L"删除空目录...", L"空のディレクトリを削除中...", L"Удаление пустых каталогов..."},
        {L"Security Warning: Registry modifications outside HKEY_CURRENT_USER are blocked for safety.", L"安全警告: 拦截了非当前用户(HKEY_CURRENT_USER)的危险注册表修改。", L"セキュリティ警告：安全のため、HKEY_CURRENT_USER 以外のレジストリ変更はブロックされました。", L"Предупреждение: Модификации реестра вне HKEY_CURRENT_USER заблокированы."},
        {L"This Program", L"此程序", L"このプログラム", L"Эта программа"},
    };
    return strings[id][(int)g_Lang];
}
