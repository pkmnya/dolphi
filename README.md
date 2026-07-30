# Dolphi

**高效的 Windows 压缩与分发工具**

Dolphi 是一款基于 **Zstandard (Zstd)** 算法的轻量级 Windows 压缩与分发工具。

与仅追求极限压缩率的传统解压软件不同，Dolphi 更专注于现代文件交付的完整工作流。无论是日常文件的高速打包提取，还是专业软件的独立分发与部署，Dolphi 都能为您提供更流畅、高效的体验。

[简体中文](#简体中文) | [English](#english)

<div align="center">
  <img src="demo_quick.gif" width="72%" alt="Quick Mode Demo">
  <img src="demo_install.gif" width="72%" alt="Installer Mode Demo">
</div>

---

<a id="简体中文"></a>

# 🇨🇳 简体中文

> **Beta 版本提示**
> Dolphi 目前处于 Beta 测试阶段。核心功能与 Windows 环境适配（如文件占用、权限、路径处理等）已完成初步测试。由于本工具涉及底层文件的压缩、释放及系统级别的安装卸载，在处理极为重要的数据前，建议您做好文件备份。欢迎在遇到问题时向我们提交 Issue。

Dolphi 让文件分享像运行软件一样简单：一个小程序（128KB），双击即可使用。

### 核心特性

**基于 Zstd 的高速压缩引擎**
Dolphi 采用现代压缩算法 Zstandard 作为核心。它在压缩速度、解压速度与压缩率之间取得了极佳的平衡，非常适合用于处理现代庞大的软件发布包、游戏资源、更新补丁及大型文件传输。

**便捷的自释放分发 (SFX)**
只需一次打包，即可生成独立运行的自释放程序。接收者无需安装 Dolphi 或任何第三方解压软件，双击运行即可自动将文件释放至当前目录，实现真正的“即开即用”。特别适合便携版软件、游戏 MOD 及日常文件的快速分享。

**标准 Windows 安装包构建**
对于有正式发布需求的开发者，Dolphi 提供了完整的 Windows 安装程序构建功能。打包者可以预设安装目录、配置注册表项并集成卸载管理，轻松打造专业、规范的软件部署流程。

**广泛的 ZIP 格式兼容**
在提供专属分发能力的同时，Dolphi 依然支持输出标准的 ZIP 格式压缩包。当您需要与 macOS、Linux 用户进行文件交换，或需要兼容第三方解压工具时，ZIP 格式能确保文件畅通无阻。

**灵活的分卷压缩**
面对超大文件或网盘上传体积限制，Dolphi 支持将大型压缩文件分割为多个分卷，让大文件的管理、传输和发布变得更加从容。

**面向自动化的脚本打包**
Dolphi 支持通过 INI 配置文件进行命令行级别的自动化打包。该功能专为构建阶段设计，非常适合无缝接入 CI/CD 工作流、执行批量打包任务以及自动化测试发布（注：此功能用于打包过程自动化，而非客户端的静默安装）。

**坚固的现代加密保护**
针对现代分发场景的安全需求，Dolphi 采用了高强度的加密设计。它显著提高了密码验证的计算成本，有效抵御离线暴力破解攻击，为您的私有资源、商业分发文件及内部测试版本保驾护航。

**深度的 Windows 资源管理器集成**
安装后，Dolphi 将完美融入 Windows 右键菜单。无需繁琐地打开主界面，右键点击即可完成常用的压缩与打包操作。全面兼容 Windows 7、Windows 10 及 Windows 11，并支持简中、英文、日语及俄语多种界面语言。

### 适用场景

*   **日常用户：** 追求高效的文件打包、备份与快捷分享。
*   **开发者与工作室：** 制作 Windows 软件安装包、发布便携版程序及分发游戏资产。
*   **开源项目维护者：** 自动化构建 GitHub Releases，简化 Windows 用户的下载与使用门槛。

### 下载与支持

*   **最新版本下载：** [GitHub Releases](https://github.com/pkmnya/dolphi/releases/latest)
*   **交流反馈（QQ群）：** [点击加入](https://qm.qq.com/q/wdYINMkdIA)

---

<a id="english"></a>

# 🇬🇧 English

> **Beta Warning**
> Dolphi is currently in its Beta stage. While core features and Windows compatibility (including file handling, permissions, and path processing) have been tested, the tool performs fundamental file operations like extraction, installation, and uninstallation. Please ensure you back up important data before use.

Dolphi lets you send files like an application: one small executable（128KB）, double-click, ready to use.

### Core Features

**High-Speed Zstandard Engine**
Powered by the modern **Zstandard (Zstd)** algorithm, Dolphi moves away from the traditional obsession with extreme compression ratios. Instead, it offers an optimal balance between compression speed, extraction speed, and file size, making it ideal for modern software packages, game assets, and large file transfers.

**Standalone Self-Extracting Packages (SFX)**
Dolphi allows you to create independent self-extracting archives. Your recipients do not need Dolphi or any other extraction utility installed on their system. Upon execution, the package automatically extracts its contents directly into the current directory, perfect for portable applications, quick tools, and hassle-free file sharing.

**Professional Windows Installer Generation**
For software distribution, Dolphi features an installer mode that creates standard Windows setup executables. Developers can easily define target directories, configure registry entries, and manage uninstallation routines to deliver a complete and professional deployment experience.

**Standard ZIP Compatibility**
While Dolphi excels in Windows-specific distribution, it retains full support for creating standard ZIP archives. This ensures seamless cross-platform compatibility when sharing files with macOS or Linux users, or when working with third-party archive utilities.

**Multi-Volume Archives**
Easily bypass upload limits and simplify the transfer of massive files. Dolphi supports splitting large archives into smaller, manageable volumes, making it highly suitable for game resource distribution and large package delivery.

**Scriptable Automated Packaging**
Designed with developers in mind, Dolphi supports automated package creation via INI configuration files. This is engineered specifically to integrate into CI/CD pipelines for batch packaging and reproducible builds (Note: This automates the *creation* of packages, not the silent installation process on the user's end).

**Modern Encryption Protection**
Security matters. Dolphi implements modern encryption designed specifically to protect distributed content. By intentionally increasing the computational cost of password verification, it significantly improves resistance against offline brute-force attacks, keeping your private resources and commercial files secure.

**Seamless Windows Explorer Integration**
Dolphi integrates directly into the Windows context menu. You can perform standard packing and archiving tasks with a simple right-click, without needing to open the main application interface. It is fully compatible with Windows 7, 10, and 11, and supports English, Simplified Chinese, Japanese, and Russian.

### Use Cases

*   **Everyday Users:** Fast and reliable file packing, backups, and sharing.
*   **Developers & Studios:** Creating Windows releases, professional installers, portable apps, and game resource packages.
*   **Open Source Maintainers:** Streamlining GitHub Releases and automated builds for an improved user experience on Windows.

### Download

*   **Latest Release:** [GitHub Releases](https://github.com/pkmnya/dolphi/releases/latest)
